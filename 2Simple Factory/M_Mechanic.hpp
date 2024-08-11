//
// Created by xu183 on 2024/8/6.
//
#ifndef M_MECHANIC_HPP
#define M_MECHANIC_HPP

#include "Monster.hpp"

class M_Mechanic : public Monster {
public:
    explicit M_Mechanic(usd hp = 800, usd mp = 100, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a mechanic monster created!" << endl;
    }
};


#endif