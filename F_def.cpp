#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "C_BaseCharacter.h"
#include "C_PlayerCharacter.h"
#include "C_MonsterCharacter.h"
#include "F_decla.h"

using namespace std;

void intro()
{
    cout << "*\tGreetings Traveler !\n";
    cout << "*\tYou are about to live an incredible adventure...\n";
    cout << "*\tFull of explorations, combats, joy, pain and probably death.\n";
    cout << "*\tWelcome to the magical world of\n\n\n";
    cout << "*\tDUNGEONS & DRAGONS\n\n\n";
    cout << "*\tBut first...let's talk a little bit about yourself...\n\n";
}

Player* createPlayer()
{
    return new Player();
}

Monster* createMonster()
{
    return new Monster();
}

string enterName()
{
    cout << "\n\nEven the lowest, talentless adventurer want to become famous\n";
    cout << "And in order to enter the great legends, they need a name to be carved in stones...\n";
    cout << "So tell me, Adventurer, what will be your name ?\n";
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
    static std::mt19937 mersenne(static_cast<unsigned int>(time(0))); // initialize our mersenne twister with a random seed
    static const double fraction = 1.0 / (mersenne.max() + 1.0);
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


