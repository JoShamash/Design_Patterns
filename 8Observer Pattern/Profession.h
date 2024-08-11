//
// Created by xu183 on 2024/8/9.
//

#ifndef OP_PROFESSION_H
#define OP_PROFESSION_H

#include <iostream>
#include <utility>

using namespace std;

class Notifier;

class Profession {
public:
    Profession(unsigned pid, string name, unsigned fid = 0);

    unsigned getFamilyID() const;

    string getName() const;

    void setFamilyID(unsigned id);

    void sendMsg(Notifier *notifier, const string &message);

    virtual void acceptMsg(Profession *sender, const string &message);

    virtual ~Profession() = default;
private:
    unsigned PlayerID;
    string Name;
    unsigned FamilyID;
};

class Mage : public Profession{
public:
    Mage(unsigned pid, string name, unsigned fid = 0);
};

class Warrior : public Profession{
public:
    Warrior(unsigned pid, string name, unsigned fid = 0);
};

class Priest : public Profession{
public:
    Priest(unsigned pid, string name, unsigned fid = 0);
};

#endif //OP_PROFESSION_H
