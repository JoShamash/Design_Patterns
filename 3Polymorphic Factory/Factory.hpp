//
// Created by xu183 on 2024/8/6.
//
#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "Monster.hpp"

class Factory {
public:
    virtual Monster *createMonster() = 0;
    virtual ~Factory() = default;
};

Monster *createMonster(Factory *factory) {
    return factory->createMonster();
}

#endif //FACTORY_HPP