//
// Created by xu183 on 2024/8/9.
//

#include "Strategy.hpp"
#include "Profession.hpp"

void test(){
    Profession *p = new mage;
    Strategy *s1 = new Big_HealthPack;
    Strategy *s2 = new Small_HealthPack;
    Strategy *s3 = new Mid_HealthPack;
    p->setStrategy(s1);
    p->useItem();
    cout << "Hp : " << p->getHp() << endl;
    p->setStrategy(s2);
    p->useItem();
    cout << "Hp : " << p->getHp() << endl;
    p->setStrategy(s3);
    p->useItem();
    cout << "Hp : " << p->getHp() << endl;
    delete p;
    delete s1;
    delete s2;
    delete s3;
}

int main(){
    test();
    return 0;
}