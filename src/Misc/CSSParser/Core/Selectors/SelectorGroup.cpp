//
//  SelectorGroup.cpp
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/7.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#include "SelectorGroup.hpp"

namespace future {
    
    void GroupSelector::addSelector(future::Selector *s)
    {
        if (!s) {
            return ;
        }
        m_selectors.push_back(s);
    }
    
    GroupSelector::~GroupSelector()
    {
        CleanContainer<Selector *>(m_selectors);
    }

    bool GroupSelector::isBaseSelector()
    {
    	return false;
    }

    int GroupSelector::weight()
    {
    	std::list<Selector *>::iterator it = m_selectors.begin();
    	std::list<Selector *>::iterator end = m_selectors.end();
    	int w = 0;
    	while(it != end) {
    		w += (*it++)->weight();
    	}
    	return w;
    }
    
    bool GroupSelector::operator==(Selector *other) {
        GroupSelector *otherSelector = dynamic_cast<GroupSelector *>(other);
        if (!otherSelector) {
            return false;
        }
        if (otherSelector->m_selectors.size() != m_selectors.size()) {
            return false;
        }
        auto otherList = otherSelector->m_selectors;
        for (Selector *s : m_selectors) {
            Selector* removeSelector = nullptr;
            for (Selector *others : otherList) {
                if (*others == s) {
                    removeSelector = others;
                }
            }
            if (removeSelector) {
                otherList.remove(removeSelector);
            } else {
                return false;
            }
        }
        return true;
    }
    
    std::string GroupSelector::description()
    {
        std::string desc = "Group Selector:[\n";
        for (Selector* s: m_selectors) {
            desc += s->description() + ",\n";
        }
        desc += "]\n";
        return desc;
    }
}
