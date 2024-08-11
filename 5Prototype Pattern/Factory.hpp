//
// Created by xu183 on 2024/8/6.
//

#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "Monster.hpp"

class Factory {
public:
    virtual Monster *createMonster_Undead() = 0;

    virtual Monster *createMonster_Element() = 0;

    virtual Monster *createMonster_Mechanic() = 0;

    virtual ~Factory() = default;
};

class Factory_Swamp : public Factory {
public:
    Monster *createMonster_Undead() override {
        return new M_Undead_Swamp;
    }

    Monster *createMonster_Element() override {
        return new M_Element_Swamp;
    }

    Monster *createMonster_Mechanic() override {
        return new M_Mechanic_Swamp;
    }
};

class Factory_Town : public Factory {
public:
    Monster *createMonster_Undead() override {
        return new M_Undead_Town;
    }

    Monster *createMonster_Element() override {
        return new M_Element_Town;
    }

    Monster *createMonster_Mechanic() override {
        return new M_Mechanic_Town;
    }
};

class Factory_Mountain : public Factory {
public:
    Monster *createMonster_Undead() override {
        return new M_Undead_Mountain;
    }

    Monster *createMonster_Element() override {
        return new M_Element_Mountain;
    }

    Monster *createMonster_Mechanic() override {
        return new M_Mechanic_Mountain;
    }
};

#endif //FACTORY_HPP
