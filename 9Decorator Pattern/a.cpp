//
// Created by xu183 on 2024/8/9.
//
#include "Control.h"
#include "Decorator.h"
#include <iostream>

using namespace std;

void test(){
    Control *init = new Init_Control;
    Control *dec1 = new Decorator(init);
    Control *dec2 = new GridGraph_Dec(dec1);
    Control *dec3 = new Border_Dec(dec2);
    Control *dec4 = new VerScroll_Dec(dec3);
    Control *dec5 = new HorScroll_Dec(dec4);

    dec5->draw();

    delete init;
    delete dec1;
    delete dec2;
    delete dec3;
    delete dec4;
    delete dec5;
}

int main() {
    test();
    return 0;
}