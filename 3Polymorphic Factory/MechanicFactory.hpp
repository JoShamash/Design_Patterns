//
// Created by xu183 on 2024/8/6.
//

#ifndef MECHANICFACTORY_HPP
#define MECHANICFACTORY_HPP

#include "Factory.hpp"
#include "M_Mechanic.hpp"

class MechanicFactory : public Factory {
public:
    Monster *createMonster() override {
        return new M_Mechanic;
    }
};


#endif //MECHANICFACTORY_HPP