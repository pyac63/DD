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

Player* createPlayer(int str, int ca, int hp, string name)
{
    return new Player(str, ca, hp, name);
}

Monster* createMonster(int str, int ca, int hp, string name)
{
    return new Monster(str, ca, hp, name);
}

string enterName()
{
    cout << "Enter your name: \n";
    string name;
    cin >> name;
    return name;
}

int enterHp()
{
    cout << "Enter your Hp: \n";
    int hp;
    cin >> hp;
    return hp;
}

int enterStr()
{
    cout << "Enter your Strength: \n";
    int str;
    cin >> str;
    return str;
}

int enterCa()
{
    cout << "Enter your Class Armor: \n";
    int ca;
    cin >> ca;
    return ca;
}


void printPlayer (const Player &test)
{
    cout << "Name: " << test.getName() << '\n';
    cout << "Hp: " << test.getHp() << '\n';
    cout << "Strength: " << test.getStr() << '\n';
    cout << "Class Armor: " << test.getCa() << '\n';
}

void printMonster (const Monster &test)
{
    cout << test.getName() << '\n';
    cout << test.getHp() << '\n';
    cout << test.getStr() << '\n';
    cout << test.getCa() << '\n';
}

int getRandomNumber(int min, int max)
{
	// Note: Due to a bug in the Code::Blocks compiler, if using Code::Blocks on Windows, delete the two lines above and uncomment this line:
	static mt19937 mersenne(static_cast<unsigned int>(time(0))); // initialize our mersenne twister with a random seed
	static const double fraction = 1.0 / (static_cast<double>(mersenne.max()) + 1.0);
	return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

bool checkRollCrit(int x)
{
    if (x == 20)
        return true;
    else
        return false;
}

bool checkRollFail(int x)
{
    if (x == 1)
        return true;
    else
        return false;
}

int rollD4()
{
    return getRandomNumber(1, 4);
}

int rollD6()
{
    return getRandomNumber(1, 6);
}

int rollD8()
{
    return getRandomNumber(1, 8);
}

int rollD10()
{
    return getRandomNumber(1, 10);
}

int rollD12()
{
    return getRandomNumber(1, 12);
}

int rollD20 (char character)
{
    using namespace std::this_thread;
    using namespace std::chrono;

    int result = getRandomNumber(1, 20);

    if (character == 'p')
    {
        char validate;
        do
        {
            cout << "Enter (r) to throw the dice!\n";
            cin >> validate;
        }
        while (validate != 'r');

        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << "You rolled a " << result << ".\n";

    }
    else
    {
        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));
        cout << ".\n";
        sleep_for(seconds(1));

        cout << "Enemy rolled a " << result << ".\n";

    }

    return result;


}

int rollD100()
{
    return getRandomNumber(1, 100);
}


