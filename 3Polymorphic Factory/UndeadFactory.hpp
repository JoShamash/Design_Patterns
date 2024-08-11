//
// Created by xu183 on 2024/8/6.
//

#ifndef UNDEADFACTORY_HPP
#define UNDEADFACTORY_HPP

#include "Factory.hpp"
#include "M_Undead.hpp"

class UndeadFactory : public Factory {
public:
    Monster *createMonster() override {
        return new M_Undead;
    }
};

#endif //UNDEADFACTORY_HPP
