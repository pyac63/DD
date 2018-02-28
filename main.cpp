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
    //int hp {enterHp()};
    //int ca {enterCa()};
    Player *player = createPlayer();
    player->setName(name);
    player->setHp(13);
    player->setCa(16);
    while (player->getAlive())
    {
        player->setState(game(player));
    }


    delete player;
    player = nullptr;

    return 0;
}
