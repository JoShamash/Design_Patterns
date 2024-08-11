//
// Created by xu183 on 2024/8/5.
//

#ifndef TMP_WARRIOR_HPP
#define TMP_WARRIOR_HPP

#include "All_profession.hpp"
#include <iostream>

using namespace std;

class warrior : public profession {
public:
    explicit warrior(usd hp = 1000, usd mp = 300, usd physical_power = 50, usd magic_power = 10, usd defense = 25)
            : profession(hp, mp, physical_power, magic_power, defense) {};

    ~warrior() override = default;

private:
    void effect_enemy() override {
        cout << "every enemy get physical damage 50" << endl;
    }

    void effect_self() override {
        cout << "the warrior consume hp 50" << endl;
        hp -= 50;
    }

    void effect_play() override {
        cout << "warrior burn_skill is casting!" << endl;
    }
};


#endif //TMP_WARRIOR_HPP
