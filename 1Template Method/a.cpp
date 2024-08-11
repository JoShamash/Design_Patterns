#include <iostream>
#include <memory>
#include "warrior.hpp"
#include "priest.hpp"
#include "mage.hpp"

using namespace std;

void test() {
    profession *warrior_player = new warrior;
    profession *priest_player = new priest;
    profession *mage_player = new mage;

    warrior_player->burn_skill();
    cout << "---------------------------------" << endl;
    priest_player->burn_skill();
    cout << "---------------------------------" << endl;
    mage_player->burn_skill();

    delete warrior_player;
    delete priest_player;
    delete mage_player;
}

int main() {
    test();
    return 0;
}