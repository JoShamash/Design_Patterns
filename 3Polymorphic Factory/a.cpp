//
// Created by xu183 on 2024/8/6.
//

#include "Monster.hpp"
#include "Factory.hpp"
#include "MechanicFactory.hpp"
#include "UndeadFactory.hpp"
#include "ElementFactory.hpp"

using namespace std;

void test(){
    Factory *f1= new ElementFactory;
    Factory *f2= new UndeadFactory;
    Factory *f3= new MechanicFactory;
    Monster *m1 = createMonster(f1);
    Monster *m2 = createMonster(f2);
    Monster *m3 = createMonster(f3);
    delete f1;
    delete f2;
    delete f3;
    delete m1;
    delete m2;
    delete m3;
}

int main(){
    test();
    return 0;
}