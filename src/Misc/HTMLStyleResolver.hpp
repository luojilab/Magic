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
#include <QWriteLocker>
#include "Selector.hpp"

using GumboNode = struct GumboInternalNode;
using HTMLTagStylesType = QMap<QString, QString>;
using SelectorListType = QList<QSharedPointer<future::Selector> >;
using CSSSelectorStyleRuleListType = std::list<std::pair<QSharedPointer<future::Selector>, HTMLTagStylesType> >;
using SelectorStylesListType = QMap<QString, std::pair<QSharedPointer<future::Selector>, QString> >;
class HTMLResource;
class HTMLStyleResolver {
public:
    HTMLStyleResolver();
    virtual ~HTMLStyleResolver();
    HTMLTagStylesType getHTMLTagStyles(const HTMLResource *htmlRes, const GumboNode *node);
    
private:
    QList<const GumboNode *>getCSSTagsInorder(const GumboNode *root);
    HTMLTagStylesType filterCSSStyles(const CSSSelectorStyleRuleListType& candidateStyle, const SelectorStylesListType& initialList);
    SelectorListType getTagSelectors(const GumboNode *, const QString& htmlDir);
    SelectorListType getLinkTagSelectors(const GumboNode *, const QString& htmlDir);
    SelectorListType getStyleTagSelectors(const GumboNode *);
    GumboNode* getRootOfTree(const GumboNode*);
    HTMLTagStylesType scanCSSRule(const QString& css);
    inline QString getNodeAttribute(const GumboNode *, const QString& attrName);
    
private:
    using SelectorCacheType = QMap<QString, QList<QSharedPointer<future::Selector> > >;
    SelectorCacheType m_cache;
    QReadWriteLock m_lock;
};

#endif /* HTMLStyleResolver_hpp */
