//
// Created by xu183 on 2024/8/7.
//
#include "Director.hpp"

void test() {
    Builder *b1 = new M_Element_Builder;
    Builder *b2 = new M_Mechanic_Builder;
    Builder *b3 = new M_Undead_Builder;
    auto *d = new Builder_Director(b1);
    cout << "-----------------------------------------" << endl;
    Monster *m1 = d->construct("482937561204");
    cout << "-----------------------------------------" << endl;
    d->setBuilder(b2);
    Monster *m2 = d->construct("739182645370");
    cout << "-----------------------------------------" << endl;
    d->setBuilder(b3);
    Monster *m3 = d->construct("561093827451");
    cout << "-----------------------------------------" << endl;
    delete b1;
    delete b2;
    delete b3;
    delete m1;
    delete m2;
    delete m3;
    delete d;
}

int main() {
    test();
    return 0;
}