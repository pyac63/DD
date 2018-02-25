#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>
#include "F_decla.h"
#include "C_BaseCharacter.h"
#include "C_PlayerCharacter.h"
#include "C_MonsterCharacter.h"


using namespace std;

bool game(Player* player)
{

    char p = 'p';
    char m = 'm';


    printPlayer(*player);
    Weapon *playerweapon = createWeapon(3);
    Weapon *playerweapon2 = createWeapon(15);
    player->assignWeapon(playerweapon);
    player->assignWeapon(playerweapon2);
    player->printWeapon();
    player->assignCaracRoll(getCaracRoll());
    player->printCarac();
    Monster *monster = createMonster(6, 13, 20, "Troll");
    while ((player->getHp()) > 0 && (monster->getHp() > 0))
    {
        //cout << monster->getCha() << '\n';
        int newHp;
        int playerRoll = rollD20(p);

        if (checkRollFail(playerRoll) || playerRoll < monster->getCa())
        {
            cout << "You miss...\n";
        }

        else
        {
            if (checkRollCrit(playerRoll))
            {
                cout << "You hit critically !!\n";
                newHp = (monster->getHp())-((player->getStr())*2);
                monster->setHp(newHp);
            }

            else
            {
                cout << "You hit !\n";
                newHp = (monster->getHp())-(player->getStr());
                monster->setHp(newHp);
            }

        }

        if (monster->getHp() <= 0)
            break;
        int monsterRoll = rollD20(m);
        if (checkRollFail(monsterRoll) || monsterRoll < player->getCa())
        {
            cout << "Enemy miss...\n";
        }
        else
        {
            if (checkRollCrit(monsterRoll))
            {
                cout << "Enemy hit critically !!\n";
                newHp = (player->getHp())-((monster->getStr())*2);
                player->setHp(newHp);
            }

            else
            {
                cout << "Enemy hit !\n";
                newHp = (player->getHp())-(monster->getStr());
                player->setHp(newHp);
            }
            cout << "You now have " << player->getHp() << " HP.\n";
        }


    }
    if (player->getHp() > 0)
    {
        cout << "Congratulations ! You defeated the monster !\n";

        delete monster;
        monster = nullptr;
        delete playerweapon;
        playerweapon = nullptr;
        return 1;
    }
    else
    {
        cout << "You have been slayed...\n";

        delete monster;
        monster = nullptr;
        delete playerweapon;
        playerweapon = nullptr;
        return 0;
    }



}
