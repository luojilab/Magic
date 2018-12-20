//
//  CSSSelectorJudge.cpp
//  Magic
//
//  Created by 1m0nster on 2018/12/19.
//

#include "CSSSelectorJudge.hpp"
#include "CSSParser.hpp"
#include "Selector.hpp"
#include "ContainerUtil.hpp"
#include <QSharedPointer>

bool CSSSelectorJudge::selectorExists(const QString &selector, const QString &fullCSS) {
    if (selector.isEmpty() || fullCSS.isEmpty()) {
        return false;
    }
    bool ret = false;
    future::CSSParser parser;
    parser.parseByString(fullCSS.toStdString());
    auto fullSelectors = parser.getSelectors();
    parser.cleanRes();
    
    parser.parseByString(selector.toStdString());
    std::list<future::Selector *>lookingSelector = parser.getSelectors();
    
    if (lookingSelector.empty() || fullSelectors.empty() || lookingSelector.size() > 1) {
        future::CleanContainer<future::Selector *>(lookingSelector);
        future::CleanContainer<future::Selector *>(fullSelectors);
        return false;
    }
    future::Selector* _selector = lookingSelector.front();
    ret = false;
    for (future::Selector * s : fullSelectors) {
        if (*_selector == s) {
            ret = true;
            break;
        }
    }
    future::CleanContainer<future::Selector *>(lookingSelector);
    future::CleanContainer<future::Selector *>(fullSelectors);
    return ret;
}
