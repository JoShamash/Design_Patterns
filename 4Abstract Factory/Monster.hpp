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

class M_Element_Swamp : public Monster {
public:
    explicit M_Element_Swamp(usd hp = 800, usd mp = 500, usd attack = 10) : Monster(hp, mp, attack) {
        cout << "a swamp element monster created!" << endl;
    }
};

class M_Mechanic_Swamp : public Monster {
public:
    explicit M_Mechanic_Swamp(usd hp = 800, usd mp = 100, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a swamp mechanic monster created!" << endl;
    }
};

class M_Undead_Swamp : public Monster {
public:
    explicit M_Undead_Swamp(usd hp = 800, usd mp = 800, usd attack = 30) : Monster(hp, mp, attack) {
        cout << "a swamp undead monster created!" << endl;
    }
};

class M_Element_Town : public Monster {
public:
    explicit M_Element_Town(usd hp = 800, usd mp = 500, usd attack = 10) : Monster(hp, mp, attack) {
        cout << "a town swamp element monster created!" << endl;
    }
};

class M_Mechanic_Town : public Monster {
public:
    explicit M_Mechanic_Town(usd hp = 1000, usd mp = 100, usd attack = 30) : Monster(hp, mp, attack) {
        cout << "a town mechanic monster created!" << endl;
    }
};

class M_Undead_Town : public Monster {
public:
    explicit M_Undead_Town(usd hp = 500, usd mp = 800, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a town undead monster created!" << endl;
    }
};

class M_Element_Mountain : public Monster {
public:
    explicit M_Element_Mountain(usd hp = 1000, usd mp = 500, usd attack = 30) : Monster(hp, mp, attack) {
        cout << "a mountain element monster created!" << endl;
    }
};

class M_Mechanic_Mountain : public Monster {
public:
    explicit M_Mechanic_Mountain(usd hp = 800, usd mp = 100, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a mountain mechanic monster created!" << endl;
    }
};

class M_Undead_Mountain : public Monster {
public:
    explicit M_Undead_Mountain(usd hp = 500, usd mp = 800, usd attack = 20) : Monster(hp, mp, attack) {
        cout << "a mountain undead monster created!" << endl;
    }
};

#endif //MONSTER_HPP
