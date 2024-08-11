//
// Created by xu183 on 2024/8/9.
//

#include "Profession.h"
#include "Notifier.h"


void test(){
    Profession *p1 = new Mage(114514, "张三");
    Profession *p2 = new Warrior(114515, "李四");
    Profession *p3 = new Mage(114516, "王五");
    Profession *p4 = new Priest(114517, "赵六");
    Profession *p5 = new Warrior(114518, "孙七");

    Notifier *notifier = new FamilyTalk_Notifier;

    p1->setFamilyID(20);
    p2->setFamilyID(20);
    p3->setFamilyID(20);
    p4->setFamilyID(30);
    p5->setFamilyID(30);

    notifier->addToList(p1);
    notifier->addToList(p2);
    notifier->addToList(p3);
    notifier->addToList(p4);
    notifier->addToList(p5);

    notifier->removeFromList(p2);

    p1->sendMsg(notifier, "全族人沼泽地集合，准备进攻！");
    p4->sendMsg(notifier, "全族人城门集合，准备讨伐！");

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
}

int main(){
    test();
    return 0;
}