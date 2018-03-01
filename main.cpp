#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>
#include "C_BaseCharacter.h"
#include "C_PlayerCharacter.h"
#include "C_MonsterCharacter.h"
#include "F_decla.h"

using namespace std;

int main()
{
    intro();

    string name {enterName()};
    Player *player = createPlayer();
    player->setName(name);
    player->setHp(11);
    player->setCa(16);
    Weapon *playerweapon = createWeapon(12);
    player->assignWeapon(playerweapon);
    player->assignCaracRoll(getCaracRoll());
    player->assignCaracAndMod();
    player->printCaracAndMod();
    while (player->getAlive())
    {
        player->setState(game(player));
    }


    delete playerweapon;
    //playerweapon = nullptr;
    delete player;
    //player = nullptr;

    return 0;
}
