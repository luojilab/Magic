//
//  HTMLStyleResolver.hpp
//  Magic
//
//  Created by 1m0nster on 2018/12/12.
//

#ifndef HTMLStyleResolver_hpp
#define HTMLStyleResolver_hpp

#include <stdio.h>
#include <QString>
#include <QList>
#include <QMap>
#include <QSharedPointer>
#include "Selector.hpp"

using GumboNode = struct GumboInternalNode;
using HTMLTagStylesType = QMap<QString, QString>;
using SelectorListType = QList<QSharedPointer<future::Selector> >;
class HTMLResource;
class HTMLStyleResolver {
public:
    HTMLStyleResolver();
    virtual ~HTMLStyleResolver();
    HTMLTagStylesType getHTMLTagStyles(const HTMLResource *htmlRes, const GumboNode *node);
    
private:
    QList<const GumboNode *>getCSSTagsInorder(const GumboNode *root);
    SelectorListType getTagSelectors(const GumboNode *);
    SelectorListType getLinkTagSelectors(const GumboNode *);
    SelectorListType getStyleTagSelectors(const GumboNode *);
    GumboNode* getRootOfTree(const GumboNode*);
    HTMLTagStylesType scanCSSRule(const QString& css);
    inline QString getNodeAttribute(const GumboNode *, const QString& attrName);
    
private:
    using SelectorCacheType = QMap<QString, QList<QSharedPointer<future::Selector> > >;
    SelectorCacheType m_cache;
    QString m_currentHTMLDir;
private:
    struct StyleContainer {
        QSharedPointer<future::Selector> selector;
        HTMLTagStylesType styleRules;
    };
};

#endif /* HTMLStyleResolver_hpp */
