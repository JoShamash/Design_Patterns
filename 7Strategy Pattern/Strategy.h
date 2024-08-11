//
// Created by xu183 on 2024/8/9.
//

#ifndef BP_STRATEGY_H
#define BP_STRATEGY_H

class Profession;

class Strategy {
public:
    virtual void UseItem(Profession *pp) = 0;

    virtual ~Strategy() = default;
};

#endif //BP_STRATEGY_H
