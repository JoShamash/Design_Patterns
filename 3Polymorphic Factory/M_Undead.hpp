//
// Created by xu183 on 2024/8/6.
//
#ifndef M_UNDEAD_HPP
#define M_UNDEAD_HPP

#include "Monster.hpp"

class M_Undead : public Monster {
public:
    explicit M_Undead(usd hp = 500, usd mp = 800, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a undead monster created!" << endl;
    }
};


#endif