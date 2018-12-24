//
//  HTMLStyleResolver.cpp
//  Magic
//
//  Created by 1m0nster on 2018/12/12.
//

#include <QDir>
#include <QFileInfo>
#include "ResourceObjects/HTMLResource.h"
#include "HTMLStyleResolver.hpp"
#include "GumboInterface.h"
#include "CSSParser.hpp"
#include "HTMLCSSRefAdaptor.h"

const char* S_kStyle = "style";
const char* S_kRel = "rel";
const char* S_kStylesheet = "stylesheet";
const char* S_kHref = "href";
const char* S_kImportant = "!important";
HTMLStyleResolver::HTMLStyleResolver() {
}

HTMLStyleResolver::~HTMLStyleResolver() {
}

HTMLTagStylesType HTMLStyleResolver::getHTMLTagStyles(const HTMLResource *htmlRes, const GumboNode *node) {
    HTMLTagStylesType styles;
    if ( !htmlRes ||
         !node ||
         node->type != GUMBO_NODE_ELEMENT ) {
        return styles;
    }
    
    QString currentHTMLDir = QFileInfo(htmlRes->GetFullPath()).dir().absolutePath() + "/";
    
    GumboNode* root = getRootOfTree(node);
    QList<const GumboNode *>cssTags = getCSSTagsInorder(root);
    SelectorListType allSelectors;
    for (const GumboNode* styleNode : cssTags) {
        allSelectors.append(getTagSelectors(styleNode, currentHTMLDir));
    }
    if (allSelectors.empty()) {
        return styles;
    }
    std::list<std::pair<QSharedPointer<future::Selector>, HTMLTagStylesType> > filterStyles;
    for (auto selector : allSelectors) {
        GumboNode *internalNode = (GumboNode *)node;
        future::HTMLCSSRefAdaptor::GumboNodesArray nodesArray = &internalNode;
        int sizeTag = 1;
        if (future::HTMLCSSRefAdaptor::nodeAdaptToSelector(&nodesArray, selector.data(), &sizeTag)) {
            HTMLTagStylesType styleRules = scanCSSRule(selector->getRuleData().c_str());
            if (!styleRules.empty()) {
                filterStyles.push_back({selector, styleRules});
            }
        }
    }
	static const int STYLE_KEY = 0; static const int STYLE_VALUE = 1;
    QMap<QString, std::pair<QSharedPointer<future::Selector>, QString> >initialStyle;
    auto tagStyleAttributes = scanCSSRule(getNodeAttribute(node, S_kStyle)).toStdMap();
    std::for_each(tagStyleAttributes.begin(), tagStyleAttributes.end(), [&](const std::pair<QString, QString>& kv) {
        initialStyle[std::get<STYLE_KEY>(kv)] = {QSharedPointer<future::Selector>(nullptr), std::get<STYLE_VALUE>(kv)};
    });
    return filterCSSStyles(filterStyles, initialStyle);
}

HTMLTagStylesType HTMLStyleResolver::filterCSSStyles(const CSSSelectorStyleRuleListType& candidateStyle, const SelectorStylesListType& initialList) {
    HTMLTagStylesType styles;
    SelectorStylesListType lastFilter(initialList);
	static const int SELECTOR = 0; static const int STYLE_RULES_MAP = 1;
	static const int STYLE_KEY = 0; static const int STYLE_VALUE = 1;
    std::for_each(candidateStyle.rbegin(), candidateStyle.rend(), [&](const std::pair<QSharedPointer<future::Selector>, HTMLTagStylesType>& style) {
        auto rules = std::get<STYLE_RULES_MAP>(style).toStdMap();
        std::for_each(rules.begin(), rules.end(), [&](const std::pair<QString, QString>& kv) {
            if (!lastFilter.contains(std::get<STYLE_KEY>(kv))) {
                lastFilter[std::get<STYLE_KEY>(kv)] = {std::get<SELECTOR>(style), std::get<STYLE_VALUE>(kv)};
                return;
            }
            auto oldSelector = std::get<SELECTOR>(lastFilter.value(std::get<STYLE_KEY>(kv)));
            auto newSelector = std::get<SELECTOR>(style);
            auto oldValue = std::get<STYLE_VALUE>(lastFilter.value(std::get<STYLE_KEY>(kv)));
            auto newValue = std::get<STYLE_VALUE>(kv);
            // tag's style arrtirbute style have first priority
            if (oldSelector.data() == nullptr) {
                return ;
            }
            // have '!important'
            if (oldValue.endsWith(S_kImportant)) {
                return ;
            } else if (newValue.endsWith(S_kImportant)) {
                lastFilter[std::get<STYLE_KEY>(kv)] = {std::get<SELECTOR>(style), std::get<STYLE_VALUE>(kv)};
                return ;
            }
            // weight
            if (newSelector->weight() > oldSelector->weight()) {
                lastFilter[std::get<STYLE_KEY>(kv)] = {std::get<SELECTOR>(style), std::get<STYLE_VALUE>(kv)};
            }
            // order
            return ;
        });
    });
    auto stdMap = lastFilter.toStdMap();
    std::for_each(stdMap.begin(), stdMap.end(), [&](const std::pair<QString, std::pair<QSharedPointer<future::Selector>, QString> >& ele) {
        styles[std::get<STYLE_KEY>(ele)] = styles[std::get<STYLE_VALUE>(std::get<STYLE_RULES_MAP>(ele))];
    });
    return styles;
}

QList<const GumboNode *> HTMLStyleResolver::getCSSTagsInorder(const GumboNode *root) {
    QList<const GumboNode *>tags;
    if ( !root ||
        (root->type != GUMBO_NODE_ELEMENT && root->type != GUMBO_NODE_DOCUMENT) ) {
        return tags;
    }
    GumboVector children = root->v.element.children;
    unsigned int childrenSize = children.length;
    for (int i = 0; i < childrenSize; i ++) {
        GumboNode* child = reinterpret_cast<GumboNode *>(children.data[i]);
        if (child->v.element.tag == GUMBO_TAG_LINK || child->v.element.tag == GUMBO_TAG_STYLE) {
            tags.push_back(child);
        }
        tags.append(getCSSTagsInorder(child));
    }
    return tags;
}

SelectorListType HTMLStyleResolver::getTagSelectors(const GumboNode *node, const QString& htmlDir) {
    QList<QSharedPointer<future::Selector> >selectors;
    if (!node) {
        return selectors;
    }
    if ( node->type != GUMBO_NODE_ELEMENT ) {
        return selectors;
    }
    switch (node->v.element.tag) {
        case GUMBO_TAG_LINK: {
            selectors = getLinkTagSelectors(node, htmlDir);
            break;
        }
        case GUMBO_TAG_STYLE: {
            selectors = getStyleTagSelectors(node);
            break;
        }
        default: {
            break;
        }
    }
    return selectors;
}

SelectorListType HTMLStyleResolver::getLinkTagSelectors(const GumboNode *node, const QString& htmlDir) {
    SelectorListType selectors;
    if (!node ||
        node->type != GUMBO_NODE_ELEMENT ||
        node->v.element.tag != GUMBO_TAG_LINK) {
        return selectors;
    }
    if (getNodeAttribute(node, S_kRel) != S_kStylesheet) {
        return selectors;
    }
    QString href = getNodeAttribute(node, S_kHref);
    if (!href.startsWith("/")) {
        href = QDir::cleanPath(htmlDir + href);
    }
    {
        QReadLocker locker(&m_lock);
        if (m_cache.contains(href)) {
            return m_cache[href];
        }
    }
    if (!QFileInfo::exists(href)) {
        return selectors;
    }
    future::CSSParser parser;
    parser.parseByFile(href.toStdString());
    auto ss = parser.getSelectors();
    for (future::Selector *s : ss) {
        selectors.push_back(QSharedPointer<future::Selector>(s));
    }
    if (!selectors.empty()) {
        {
            QWriteLocker locker(&m_lock);
            m_cache[href] = selectors;
            
        }
    }
    return selectors;
}

SelectorListType HTMLStyleResolver::getStyleTagSelectors(const GumboNode *node) {
    SelectorListType selectors;
    if (!node ||
        node->type != GUMBO_NODE_ELEMENT ||
        node->v.element.tag != GUMBO_TAG_STYLE) {
        return selectors;
    }
    GumboVector children = node->v.element.children;
    unsigned int childrenSize = children.length;
    QString cssString = "";
    for (int i = 0; i < childrenSize; i ++) {
        GumboNode *child = reinterpret_cast<GumboNode *>(children.data[i]);
        if (!child) {
            continue;
        }
        if (child->type == GUMBO_NODE_TEXT) {
            QString css = child->v.text.text;
            css = css.trimmed();
            if (css.isEmpty()) {
                continue;
            } else {
                cssString = css;
                break;
            }
        }
    }
    if (cssString.isEmpty()) {
        return selectors;
    }
    future::CSSParser parser;
    parser.parseByString(cssString.toStdString());
    auto ss = parser.getSelectors();
    for (future::Selector *s : ss) {
        selectors.push_back(QSharedPointer<future::Selector>(s));
    }
    return selectors;
}

GumboNode* HTMLStyleResolver::getRootOfTree(const GumboNode *node) {
    GumboNode *internalNode = const_cast<GumboNode *>(node);
    while (internalNode) {
        if (!internalNode->parent) {
            break;
        }
        internalNode = internalNode->parent;
    }
    return internalNode;
}

HTMLTagStylesType HTMLStyleResolver::scanCSSRule(const QString& css) {
    HTMLTagStylesType styleRules;
    if (css.isEmpty()) {
        return styleRules;
    }
    QString standardCSS(css);
    standardCSS = standardCSS.simplified();
    if (standardCSS.endsWith("}")) {
        standardCSS.remove(standardCSS.length() - 1, 1);
    }
    QStringList allKeysAndValues = standardCSS.split(";");
    for (const QString& kv : allKeysAndValues) {
        QStringList raw = kv.split(":");
        int size = raw.size();
        if (size <= 1) {
            continue;
        }
        QString v("");
        for (int i = 1; i <= size - 1; i ++) {
            v.append(raw[i]);
        }
        v = v.trimmed();
        styleRules[raw[0].trimmed()] = v;
    }
    return styleRules;
}

QString HTMLStyleResolver::getNodeAttribute(const GumboNode *node, const QString& attrName) {
    GumboAttribute* attr = gumbo_get_attribute(&node->v.element.attributes, attrName.toUtf8().data());
    if (!attr) {
        return "";
    }
    const char* v = attr->value;
    return v;
}
