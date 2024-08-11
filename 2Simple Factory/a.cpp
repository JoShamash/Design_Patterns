//
// Created by xu183 on 2024/8/6.
//

#include <iostream>
#include "MonsterFactory.hpp"

void test(){
    Monster *m1 = MonsterFactory::createMonster("und");
    Monster *m2 = MonsterFactory::createMonster("ele");
    Monster *m3 = MonsterFactory::createMonster("mec");
    delete m1;
    delete m2;
    delete m3;
}

int main(){
    test();
    return 0;
}