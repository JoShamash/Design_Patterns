//
// Created by xu183 on 2024/8/10.
//
#include "Facade.hpp"

int main(){
    Facade &FC = Facade::getInstance();
    cout << "低配置电脑设置：" << endl;
    FC.LowConfComputer();
    cout << endl;
    cout << "高配置电脑设置：" << endl;
    FC.HighConfComputer();
    return 0;
}