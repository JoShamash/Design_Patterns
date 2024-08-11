//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_DIRECTOR_HPP
#define BP_DIRECTOR_HPP

#include "Builder.hpp"

class Director {
public:
    explicit Director(Builder *builder) : pBuilder(builder) {};

    void resetBuilder(Builder *pb){
        pBuilder = pb;
    }

    void assemble() {
        pBuilder->init_begin();
        pBuilder->load_0();
        pBuilder->load_1();
        pBuilder->load_2();
        pBuilder->load_3();
        pBuilder->load_4();
        pBuilder->load_5();
        pBuilder->init_end();

        pBuilder->exportFile();
    }

private:
    Builder *pBuilder;
};

#endif //BP_DIRECTOR_HPP
