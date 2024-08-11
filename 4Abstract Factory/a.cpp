//
// Created by xu183 on 2024/8/6.
//

#include "Monster.hpp"
#include "Factory.hpp"

void test(){
    Factory * f_t = new Factory_Town;
    Factory * f_s = new Factory_Swamp;
    Factory * f_m = new Factory_Mountain;
    Monster * m1 = f_t->createMonster_Mechanic();
    Monster * m2 = f_s->createMonster_Undead();
    Monster * m3 = f_m->createMonster_Element();

    delete f_t;
    delete f_s;
    delete f_m;
    delete m1;
    delete m2;
    delete m3;
}

int main(){
    test();
    return 0;
}