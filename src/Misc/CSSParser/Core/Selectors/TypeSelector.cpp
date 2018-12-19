//
//  TypeSelector.cpp
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/7.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#include "TypeSelector.hpp"

namespace future {

	bool TypeSelector::isBaseSelector()
	{
		return true;
	}

	int TypeSelector::weight()
	{
		return 1;
	}
    
    bool TypeSelector::operator==(Selector *other) {
        TypeSelector* otherSelector = nullptr;
        if (!(otherSelector = dynamic_cast<TypeSelector *>(other))) {
            return false;
        }
        return m_typeName == otherSelector->m_typeName;
    }
    
    std::string TypeSelector::description()
    {
        return "TypeSelector: (type name is " + m_typeName + ")\n";
    }
}
