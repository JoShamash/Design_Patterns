//
// Created by xu183 on 2024/8/6.
//
#ifndef MONSTERFACTORY_HPP
#define MONSTERFACTORY_HPP

#include <string>
#include "Monster.hpp"
#include "M_Undead.hpp"
#include "M_Element.hpp"
#include "M_Mechanic.hpp"

using namespace std;

class MonsterFactory {
public:
    static Monster *createMonster(const string &name) {
        Monster *obj = nullptr;
        if (name == "und") {
            obj = new M_Undead;
        } else if (name == "ele") {
            obj = new M_Element;
        } else if (name == "mec") {
            obj = new M_Mechanic;
        }
        return obj;
    }

    MonsterFactory() = delete;

    ~MonsterFactory() = delete;
};


#endif