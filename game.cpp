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

bool game(Player* antoine)
{

    char p = 'p';
    char m = 'm';


    printPlayer(*antoine);
    Monster *monster = createMonster(6, 13, 20, "Troll");
    while ((antoine->getHp()) > 0 && (monster->getHp() > 0))
    {
        int newHp;
        int playerRoll = rollD20(p);

        if (playerRoll >= monster->getCa())
        {
            if (checkCrit(playerRoll))
            {
                cout << "You hit critically !!\n";
                newHp = (monster->getHp())-((antoine->getStr())*2);
                monster->setHp(newHp);
            }
            else
            {
                cout << "You hit !\n";
                newHp = (monster->getHp())-(antoine->getStr());
                monster->setHp(newHp);
            }

        }
        else
        {
            cout << "You miss...\n";
        }

        if (monster->getHp() <= 0)
            break;
        int monsterRoll = rollD20(m);
        if (monsterRoll >= antoine->getCa())
        {
            if (checkCrit(monsterRoll))
            {
                cout << "Enemy hit critically !!\n";
                newHp = (antoine->getHp())-((monster->getStr())*2);
                antoine->setHp(newHp);
            }
            else
            {
                cout << "Enemy hit !\n";
                newHp = (antoine->getHp())-(monster->getStr());
                antoine->setHp(newHp);
            }
            cout << "You now have " << antoine->getHp() << " HP.\n";
        }
        else
        {
            cout << "Enemy miss...\n";
        }
    }
    if (antoine->getHp() > 0)
    {
        cout << "Congratulations ! You defeated the monster !\n";

        delete monster;
        monster = nullptr;
        return 1;
    }
    else
    {
        cout << "You have been slayed...\n";

        delete monster;
        monster = nullptr;
        return 0;
    }



}
