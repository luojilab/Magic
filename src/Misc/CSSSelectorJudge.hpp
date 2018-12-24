//
//  CSSSelectorJudge.hpp
//  Magic
//
//  Created by 1m0nster on 2018/12/19.
//

#ifndef CSSSelectorJudge_hpp
#define CSSSelectorJudge_hpp

#include <stdio.h>
#include <QString>

class CSSSelectorJudge {
public:
    static bool selectorExists(const QString& selector, const QString& fullCSS);
};

#endif /* CSSSelectorJudge_hpp */
