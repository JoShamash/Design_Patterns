//
// Created by xu183 on 2024/8/9.
//

#include "Notifier.h"
#include "Profession.h"
#include <algorithm>
using namespace std;

void FamilyTalk_Notifier::addToList(Profession *player) {
    unsigned fid = player->getFamilyID();
    if (fid != 0) {
        auto iter = FamilyTalk_List.find(fid);
        if (iter != FamilyTalk_List.end()) {
            if(find(iter->second.begin(), iter->second.end(),player) == iter->second.end())
                iter->second.emplace_back(player);
        } else {
            FamilyTalk_List.emplace(fid, list<Profession *>{player});
        }
    }
}

void FamilyTalk_Notifier::removeFromList(Profession *player) {
    unsigned fid = player->getFamilyID();
    if (fid != 0) {
        auto iter = FamilyTalk_List.find(fid);
        if (iter != FamilyTalk_List.end()) {
            FamilyTalk_List[fid].remove(player);
            cout << player->getName() << "不想再接收到全族的消息了！" << endl;
        }
    }
}

void FamilyTalk_Notifier::notify(Profession *sender, const string &message) {
    unsigned fid = sender->getFamilyID();
    if (fid != 0) {
        auto iter = FamilyTalk_List.find(fid);
        if (iter != FamilyTalk_List.end()) {
            for (auto player: iter->second) {
                player->acceptMsg(sender, message);
            }
        }
    }
}
