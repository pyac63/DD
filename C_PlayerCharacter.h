#ifndef C_PLAYERCHARACTER_H
#define C_PLAYERCHARACTER_H

#include <iostream>
#include "C_BaseCharacter.h"

using namespace std;

class Player : public BaseCharacter
{
protected:
    string m_race;
    string m_class;

public:

    Player(int str, int ca, int hp, string name)
        : BaseCharacter(str, ca, hp, name)
    {
    }

    int rollD4()
    {
        cout << "Rolling a d4!\n";
        return getRandomNumber(1, 4);
    }

};
#endif // C_PLAYERCHARACTER_H
