//
// Created by xu183 on 2024/8/6.
//
#ifndef M_ELEMENT_HPP
#define M_ELEMENT_HPP

#include "Monster.hpp"

class M_Element : public Monster {
public:
    explicit M_Element(usd hp = 8000, usd mp = 500, usd attack = 10) : Monster(hp, mp, attack) {
        cout << "a element monster created!" << endl;
    }
};


#endif