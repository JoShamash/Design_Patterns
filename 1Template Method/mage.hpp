//
// Created by xu183 on 2024/8/5.
//

#ifndef TMP_MAGE_HPP
#define TMP_MAGE_HPP

#include "All_profession.hpp"
#include <iostream>

using namespace std;

class mage : public profession {
public:
    explicit mage(usd hp = 600, usd mp = 600, usd physical_power = 10, usd magic_power = 50, usd defense = 10)
            : profession(hp, mp, physical_power, magic_power, defense) {};

    ~mage() override = default;

private:
    void effect_enemy() override {
        cout << "every enemy get magic damage 50" << endl;
    }

    void effect_self() override {
        cout << "the mage consume mp 50" << endl;
        mp -= 50;
    }

    void effect_play() override {
        cout << "mage burn_skill is casting!" << endl;
    }
};


#endif //TMP_MAGE_HPP
