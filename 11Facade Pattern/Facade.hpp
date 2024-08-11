//
// Created by xu183 on 2024/8/10.
//

#ifndef FP_FACADE_HPP
#define FP_FACADE_HPP

#include "SubSystem.hpp"

class Facade {
public:
    Facade(const Facade &) = delete;

    Facade &operator=(const Facade &) = delete;

private:
    Facade() = default;

    ~Facade() = default;

    class SingletonHolder {
    public:
        static Facade instance;
    };

public:
    static Facade &getInstance() {
        return SingletonHolder::instance;
    }

public:
    void LowConfComputer(){
        graphic &GP = graphic::getInstance();
        GP.display(true);
        GP.effect(false);
        GP.antialiasing(false);
        GP.resolution(1);

        sound &SD = sound::getInstance();
        SD.bgsound(false);
        SD.envirsound(true);
        SD.expsound(false);
        SD.setvolum(60);

        chatvoice &CV = chatvoice::getInstance();
        CV.micvolume(60);
        CV.micsens(50);
        CV.chatvolume(60);
    }

    void HighConfComputer(){
        graphic &GP = graphic::getInstance();
        GP.display(true);
        GP.effect(true);
        GP.antialiasing(true);
        GP.resolution(0);

        sound &SD = sound::getInstance();
        SD.bgsound(true);
        SD.envirsound(true);
        SD.expsound(true);
        SD.setvolum(100);

        chatvoice &CV = chatvoice::getInstance();
        CV.micvolume(100);
        CV.micsens(100);
        CV.chatvolume(100);
    }
};

Facade Facade::SingletonHolder::instance;

#endif //FP_FACADE_HPP
