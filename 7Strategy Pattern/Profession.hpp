//
// Created by xu183 on 2024/8/5.
//

#ifndef SP_ALL_PROFESSION_HPP
#define SP_ALL_PROFESSION_HPP

#include <iostream>
#include "Profession.h"

using namespace std;

class mage : public Profession {
public:
    explicit mage(usd hp = 600, usd mp = 600, usd physical_power = 10, usd magic_power = 50, usd defense = 10)
            : Profession(hp, mp, physical_power, magic_power, defense) {};

    ~mage() override = default;

private:

};

class priest : public Profession {
public:
    explicit priest(usd hp = 800, usd mp = 800, usd physical_power = 10, usd magic_power = 15, usd defense = 15)
            : Profession(hp, mp, physical_power, magic_power, defense) {};

    ~priest() override = default;

private:
};

class warrior : public Profession {
public:
    explicit warrior(usd hp = 1000, usd mp = 300, usd physical_power = 50, usd magic_power = 10, usd defense = 25)
            : Profession(hp, mp, physical_power, magic_power, defense) {};

    ~warrior() override = default;

private:
};

#endif //SP_ALL_PROFESSION_HPP
