//
// Created by xu183 on 2024/8/9.
//

#ifndef DP_DECORATOR_H
#define DP_DECORATOR_H

#include "Control.h"

class Decorator : public Control {
public:
    explicit Decorator(Control *control);

    void draw() override;

private:
    Control *control;
};

class Border_Dec : public Decorator {
public:
    explicit Border_Dec(Control *control);

    void draw() override;

private:
    void drawBorder();
};

class VerScroll_Dec : public Decorator {
public:
    explicit VerScroll_Dec(Control *control);

    void draw() override;

private:
    void drawVerScroll();
};

class HorScroll_Dec : public Decorator {
public:
    explicit HorScroll_Dec(Control *control);

    void draw() override;

private:
    void drawHorScroll();
};

class GridGraph_Dec : public Decorator {
public:
    explicit GridGraph_Dec(Control *control);

    void draw() override;

private:
    void drawGridGraph();
};

#endif //DP_DECORATOR_H
