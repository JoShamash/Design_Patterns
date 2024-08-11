//
// Created by xu183 on 2024/8/9.
//

#ifndef SP_STRATEGY_HPP
#define SP_STRATEGY_HPP

#include "Profession.h"
#include "Strategy.h"
#include <iostream>

using namespace std;

class Small_HealthPack : public Strategy {
    void UseItem(Profession *pp) override {
        pp->setHp(pp->getHp() + 100);
        cout << "use small health package!" << endl;
    }
};

class Mid_HealthPack : public Strategy {
    void UseItem(Profession *pp) override {
        pp->setHp(pp->getHp() + 300);
        cout << "use middle health package!" << endl;
    }
};

class Big_HealthPack : public Strategy {
    void UseItem(Profession *pp) override {
        pp->setHp(pp->getHp() + 600);
        cout << "use big health package!" << endl;
    }
};

#endif //SP_STRATEGY_HPP
