//
//  SplitChecker.hpp
//  Magic
//
//  Created by 1m0nster on 2019/1/9.
//

#ifndef SplitChecker_hpp
#define SplitChecker_hpp

#include <stdio.h>
#include <QList>
#include "ResourceObjects/HTMLResource.h"

class SplitChecker {
    
public:
    enum class SplitError {
        NoError,
        ParamentError,
        NotEnoughHTML
    };
    
    struct SplitCheckResult {
        SplitError errorCode;
        std::string info;
        
        SplitCheckResult() {
            errorCode = SplitError::NoError;
        }
        
        SplitCheckResult(SplitCheckResult && rt) {
            errorCode = rt.errorCode;
            info = std::move(rt.info);
        }
    };
    
public:
    SplitChecker();
    ~SplitChecker();
    SplitCheckResult Check(const QList<HTMLResource *>&, float scale);
};

#endif /* SplitChecker_hpp */
