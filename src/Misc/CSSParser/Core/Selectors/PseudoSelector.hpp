//
//  PseudoSelector.hpp
//  DDCSSParser
//
//  Created by 1m0nster on 2018/8/7.
//  Copyright © 2018 1m0nster. All rights reserved.
//

#ifndef PseudoSelector_hpp
#define PseudoSelector_hpp

#include <stdio.h>
#include <iostream>
#include "Selector.hpp"

namespace future {
    class PseudoSelector: public Selector {
    public:
        enum ParameterType {
            STRING,
            NUMBER,
            POLYNOMIAL,
            IDENT,
            NONE
        };
        struct Parameter {
            struct polynomial {
                int coefficient;
                int constant;
                int sign;
                polynomial()
                {
                    coefficient = 0;
                    constant = 0;
                    sign = 0;
                }
                bool operator == (const polynomial& other) {
                    return (other.sign == sign &&
                    other.constant == constant &&
                    other.coefficient == coefficient);
                }
            }               polynomial;
            std::string     pString;
            int             pNumber;
            ParameterType   type;
            Parameter()
            {
                type = ParameterType::NONE;
                pNumber = 0;
                pString = "";
            }
            bool operator == (Parameter *other) {
                if (!other) {
                    return false;
                }
                if (other->type == type &&
                    (type == STRING || type == IDENT)) {
                    return pString == other->pString;
                }
                if (other->type == type &&
                    type == NUMBER) {
                    return pNumber == other->pNumber;
                }
                if (other->type == type &&
                    type == POLYNOMIAL) {
                    return polynomial == other->polynomial;
                }
                return false;
            }
        };
    public:
        PseudoSelector(const std::string& data)
        {
            m_selectorType = Selector::PseudoSelector;
            m_data = data;
            m_parameter = NULL;
        }

        virtual ~PseudoSelector();

        bool isBaseSelector();

        int weight();

        void setParameter(Parameter *);

        std::string getPseudoData();

        Parameter* getParameter();
        
        virtual bool operator == (Selector *);
        
        virtual std::string description();
    private:
        std::string m_data;
        Parameter* m_parameter;
    };
}

#endif /* PseudoSelector_hpp */