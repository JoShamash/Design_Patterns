//
// Created by xu183 on 2024/8/9.
//

#ifndef OP_NOTIFIER_H
#define OP_NOTIFIER_H

#include <string>
#include <map>
#include <list>

using namespace std;

class Profession;

class Notifier {
public:
    virtual void addToList(Profession *player) = 0;

    virtual void removeFromList(Profession *player) = 0;

    virtual void notify(Profession *sender, const string &message) = 0;

    virtual ~Notifier() = default;
};

class FamilyTalk_Notifier : public Notifier {
public:
    void addToList(Profession *player) override;

    void removeFromList(Profession *player) override;

    void notify(Profession *sender, const string &message) override;

private:
    map<unsigned, list<Profession *>> FamilyTalk_List;
};


#endif //OP_NOTIFIER_H
