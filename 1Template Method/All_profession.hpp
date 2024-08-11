//
// Created by xu183 on 2024/8/5.
//

#ifndef TMP_ALL_PROFESSION_HPP
#define TMP_ALL_PROFESSION_HPP
using usd = unsigned;

class profession {
public:
    profession(usd hp, usd mp, usd physical_power, usd magic_power, usd defense)
            : hp(hp), mp(mp), physical_power(physical_power), magic_power(magic_power), defense(defense) {};

    virtual ~profession() = default;

    void burn_skill() {
        effect_enemy();
        effect_self();
        effect_play();
    }

protected:
    usd hp;
    usd mp;
    usd physical_power;
    usd magic_power;
    usd defense;

private:
    virtual void effect_enemy() = 0;

    virtual void effect_self() = 0;

    virtual void effect_play() = 0;
};


#endif //TMP_ALL_PROFESSION_HPP
