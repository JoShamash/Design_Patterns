//
// Created by xu183 on 2024/8/9.
//

#ifndef DP_CONTROL_H
#define DP_CONTROL_H


class Control {
public:
    virtual void draw() = 0;
    virtual ~Control() = default;
};

class Init_Control : public Control{
public:
    void draw() override;
};

#endif //DP_CONTROL_H
