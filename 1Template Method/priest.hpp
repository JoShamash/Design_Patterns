//
// Created by xu183 on 2024/8/5.
//

#ifndef TMP_PRIEST_HPP
#define TMP_PRIEST_HPP

#include "All_profession.hpp"
#include <iostream>

using namespace std;

class priest : public profession {
public:
    explicit priest(usd hp = 800, usd mp = 800, usd physical_power = 10, usd magic_power = 15, usd defense = 15)
            : profession(hp, mp, physical_power, magic_power, defense) {};

    ~priest() override = default;

private:
    void effect_enemy() override {
        cout << "every enemy get mixed damage 25" << endl;
    }

    void effect_self() override {
        cout << "the priest consume mp 50, hp 10" << endl;
        hp -= 10;
        mp -= 15;
    }

    void effect_play() override {
        cout << "mage burn_skill is casting!" << endl;
    }
};


#endif //TMP_PRIEST_HPP
