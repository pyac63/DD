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

    Monster *monster = createMonster();
    monster->setName("Goblin");
    monster->setHp(15);
    monster->setCa(12);
    monster->setStr(5);
    while ((player->getHp()) > 0 && (monster->getHp() > 0))
    {
        //cout << monster->getCha() << '\n';
        int newHp;
        int playerRoll = rollD20(p);
        int playerAttack = playerRoll + player->getStrMod();

        if (checkRollFail(playerRoll) || playerAttack < monster->getCa())
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
                cout << "Your attack roll is a " << playerAttack << endl;
                cout << "You hit !\n";
                newHp = (monster->getHp())-(player->getStr());
                monster->setHp(newHp);
            }

        }

        if (monster->getHp() <= 0)
            break;
        //int monsterRoll = 20;
        int monsterRoll = rollD20(m);
        int monsterAttack = monsterRoll + monster->getStrMod();
        if (checkRollFail(monsterRoll) || monsterAttack < player->getCa())
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
                cout << "Enemy attack roll is a " << monsterAttack << endl;
                cout << "Enemy hit !\n";
                newHp = (player->getHp())-(monster->getStr());
                player->setHp(newHp);
            }
            cout << "You now have " << player->getHp() << " HP.\n";
        }


    }
    if (player->getHp() > 0)
    {
        cout << "Congratulations ! You defeated the " << monster->getName() << "!\n";

        delete monster;
        monster = nullptr;
        return 1;
    }
    else
    {
        cout << "You have been slayed by the enemy " << monster->getName() << "...\n";

        delete monster;
        monster = nullptr;
        return 0;
    }



}
