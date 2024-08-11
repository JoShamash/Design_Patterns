//
// Created by xu183 on 2024/8/9.
//

#ifndef BP_PROFESSION_H
#define BP_PROFESSION_H

#include "Strategy.h"

using usd = unsigned;

class Profession {
public:
    Profession(usd hp, usd mp, usd physical_power, usd magic_power, usd defense)
            : hp(hp), mp(mp), physical_power(physical_power), magic_power(magic_power), defense(defense) {};

    usd getHp() const {
        return hp;
    }

    void setHp(usd x) {
        hp = x;
    }

    void setStrategy(Strategy *s) {
        ItemStrategy = s;
    }

    void useItem() {
        ItemStrategy->UseItem(this);
    }

    virtual ~Profession() = default;

protected:
    usd hp;
    usd mp;
    usd physical_power;
    usd magic_power;
    usd defense;
    Strategy *ItemStrategy{};
private:
};

#endif //BP_PROFESSION_H
