//
// Created by xu183 on 2024/8/6.
//

#ifndef MONSTER_HPP
#define MONSTER_HPP

#include <iostream>

using namespace std;
using usd = unsigned;

class Monster {
public:
    Monster(usd hp, usd mp, usd attack) : hp(hp), mp(mp), attack(attack) {}

    virtual ~Monster() = default;

protected:
    usd hp;
    usd mp;
    usd attack;
};

#endif