//
// Created by xu183 on 2024/8/6.
//

#ifndef ELEMENTFACTORY_HPP
#define ELEMENTFACTORY_HPP

#include "Factory.hpp"
#include "M_Element.hpp"

class ElementFactory : public Factory {
public:
    Monster *createMonster() override {
        return new M_Element;
    }
};

#endif //ELEMENTFACTORY_HPP
