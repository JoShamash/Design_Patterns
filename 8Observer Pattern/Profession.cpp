//
// Created by xu183 on 2024/8/9.
//

#include "Profession.h"
#include "Notifier.h"
#include <utility>
#include <iostream>

using namespace std;

Profession::Profession(unsigned int pid, string name, unsigned int fid)
        : PlayerID(pid), Name(std::move(name)), FamilyID{fid} {};

unsigned Profession::getFamilyID() const {
    return FamilyID;
}

void Profession::setFamilyID(unsigned int fid) {
    FamilyID = fid;
}

void Profession::sendMsg(Notifier *notifier, const string &message) {
    notifier->notify(this, message);
}

void Profession::acceptMsg(Profession *sender, const string &message) {
    cout << Name << " 接收来自 " << sender->Name << " 的消息：" << message << endl;
}

string Profession::getName() const {
    return Name;
}

Mage::Mage(unsigned int pid, string name, unsigned int fid) : Profession(pid, std::move(name), fid) {

}

Warrior::Warrior(unsigned int pid, string name, unsigned int fid) : Profession(pid, std::move(name), fid) {

}

Priest::Priest(unsigned int pid, string name, unsigned int fid) : Profession(pid, std::move(name), fid) {

}
