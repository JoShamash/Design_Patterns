//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_MONSTER_HPP
#define BP_MONSTER_HPP

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

class M_Undead : public Monster {
public:
    explicit M_Undead(usd hp = 500, usd mp = 800, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a undead monster created!" << endl;
    }
};

class M_Mechanic : public Monster {
public:
    explicit M_Mechanic(usd hp = 800, usd mp = 100, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a mechanic monster created!" << endl;
    }
};

class M_Element : public Monster {
public:
    explicit M_Element(usd hp = 8000, usd mp = 500, usd attack = 10) : Monster(hp, mp, attack) {
        cout << "a element monster created!" << endl;
    }
};

#endif //BP_MONSTER_HPP
