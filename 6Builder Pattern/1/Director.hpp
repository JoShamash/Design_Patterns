//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_DIRECTOR_HPP
#define BP_DIRECTOR_HPP

#include "Builder.hpp"
class Builder_Director{
public:
    explicit Builder_Director(Builder *p) : pBuilder(p){}
    void setBuilder(Builder *p){
        pBuilder = p;
    }
    Monster *construct(const string& str){
        pBuilder->loadHeadModel(str.substr(3,3));
        pBuilder->loadTrunkModel(str.substr(6,3));
        pBuilder->loadLimbsModel(str.substr(9,3));
        return pBuilder->getMonster();
    }
private:
    Builder *pBuilder;
};

#endif //BP_DIRECTOR_HPP
