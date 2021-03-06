//
//  SelectorSequence.cpp
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/7.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#include "SelectorSequence.hpp"

namespace future {
    void SequenceSelector::appendSelector(Selector *s)
    {
        if (!s) {
            return;
        }
        m_selectors.push_back(s);
    }
    
    SequenceSelector::~SequenceSelector()
    {
        CleanContainer<Selector *>(m_selectors);
    }

    bool SequenceSelector::isBaseSelector()
    {
    	return false;
    }

    int SequenceSelector::weight()
    {
    	std::list<Selector *>::iterator it = m_selectors.begin();
    	std::list<Selector *>::iterator end  = m_selectors.end();
    	int w = 0;
    	while(it != end) {
    		w += (*it++)->weight();
    	}
    	return w;
    }
    
    bool SequenceSelector::operator==(Selector *other) {
        SequenceSelector* otherSelector = dynamic_cast<SequenceSelector *>(other);
        if (!otherSelector) {
            return false;
        }
        if (otherSelector->m_selectors.size() != m_selectors.size()) {
            return false;
        }
        auto current_it = m_selectors.begin();
        auto current_end = m_selectors.end();
        auto other_it = otherSelector->m_selectors.begin();
        while (current_it != current_end) {
            if (**current_it++ == *other_it++) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
    
    std::string SequenceSelector::description()
    {
        std::string desc = "SequenceSelector:[\n";
        auto it = m_selectors.begin();
        auto end = m_selectors.end();
        while (it != end) {
            desc += (*it)->description() + "\n";
            ++it;
        }
        desc += "]\n";
        return desc;
    }
}
