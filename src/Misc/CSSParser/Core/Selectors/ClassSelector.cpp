
//
//  ClassSelector.cpp
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/7.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#include "ClassSelector.hpp"

namespace future {
	bool ClassSelector::isBaseSelector()
	{
		return true;
	}

	int ClassSelector::weight()
	{
		return 10;
	}
    
    bool ClassSelector::operator == (Selector * other) {
        ClassSelector *otherSelector = nullptr;
        if (!(otherSelector = dynamic_cast<ClassSelector *>(other))) {
            return false;
        }
        return m_class == otherSelector->m_class;
    }
    
    std::string ClassSelector::description()
    {
        return "Class Selector (Class name is \"" + m_class + "\")";
    }
}
