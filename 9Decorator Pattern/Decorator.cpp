//
// Created by xu183 on 2024/8/9.
//

#include "Decorator.h"
#include <iostream>

using namespace std;

Decorator::Decorator(Control *control) : control(control) {}

void Decorator::draw() {
    control->draw();
}


Border_Dec::Border_Dec(Control *control) : Decorator(control) {}

void Border_Dec::draw() {
    Decorator::draw();
    drawBorder();
}

void Border_Dec::drawBorder() {
    cout << "绘制边框" << endl;
}

VerScroll_Dec::VerScroll_Dec(Control *control) : Decorator(control) {}

void VerScroll_Dec::draw() {
    Decorator::draw();
    drawVerScroll();
}

void VerScroll_Dec::drawVerScroll() {
    cout << "绘制垂直滚动条" << endl;
}

HorScroll_Dec::HorScroll_Dec(Control *control) : Decorator(control) {}

void HorScroll_Dec::draw() {
    Decorator::draw();
    drawHorScroll();
}

void HorScroll_Dec::drawHorScroll() {
    cout << "绘制水平滚动条" << endl;
}

GridGraph_Dec::GridGraph_Dec(Control *control) : Decorator(control) {}

void GridGraph_Dec::draw() {
    Decorator::draw();
    drawGridGraph();
}

void GridGraph_Dec::drawGridGraph() {
    cout << "绘制栅格背景" << endl;
}
