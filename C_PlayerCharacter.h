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

};
#endif // C_PLAYERCHARACTER_H
