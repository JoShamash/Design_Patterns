//
// Created by xu183 on 2024/8/7.
//

#ifndef BP_BUILDER_HPP
#define BP_BUILDER_HPP

#include "Monster.hpp"

class Builder {
public:
    virtual ~Builder() = default;

    virtual void loadTrunkModel(const string &str) = 0;

    virtual void loadHeadModel(const string &str) = 0;

    virtual void loadLimbsModel(const string &str) = 0;

    Monster *getMonster() {
        return pMonster;
    }

protected:
    Monster *pMonster{};
};

class M_Undead_Builder : public Builder {
public:
    M_Undead_Builder() {
        pMonster = new M_Undead;
    }

    void loadTrunkModel(const string &str) override {
        cout << "load monster undead trunk(" << str << ") model" << endl;
    }

    void loadHeadModel(const string &str) override {
        cout << "load monster undead head(" << str << ") model" << endl;
    }

    void loadLimbsModel(const string &str) override {
        cout << "load monster undead limbs(" << str << ") model" << endl;
    }
};

class M_Element_Builder : public Builder {
public:
    M_Element_Builder() {
        pMonster = new M_Element;
    }

    void loadTrunkModel(const string &str) override {
        cout << "load monster element trunk(" << str << ") model" << endl;
    }

    void loadHeadModel(const string &str) override {
        cout << "load monster element head(" << str << ") model" << endl;
    }

    void loadLimbsModel(const string &str) override {
        cout << "load monster element limbs(" << str << ") model" << endl;
    }
};

class M_Mechanic_Builder : public Builder {
public:
    M_Mechanic_Builder() {
        pMonster = new M_Mechanic;
    }

    void loadTrunkModel(const string &str) override {
        cout << "load monster mechanic trunk(" << str << ") model" << endl;
    }

    void loadHeadModel(const string &str) override {
        cout << "load monster mechanic head(" << str << ") model" << endl;
    }

    void loadLimbsModel(const string &str) override {
        cout << "load monster mechanic limbs(" << str << ") model" << endl;
    }
};


#endif //BP_BUILDER_HPP
