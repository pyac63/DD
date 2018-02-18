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
    cout << "Hello world!" << endl;

    string name {enterName()};
    int hp {enterHp()};
    int str {enterStr()};
    int ca {enterCa()};
    Player *antoine = createPlayer(str, ca, hp, name);
    while (antoine->getAlive())
    {
        antoine->setState(game(antoine));
    }


    delete antoine;
    antoine = nullptr;

    return 0;
}
