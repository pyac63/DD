#ifndef C_MONSTERCHARACTER_H
#define C_MONSTERCHARACTER_H

#include <iostream>
#include "C_BaseCharacter.h"

using namespace std;

class Monster : public BaseCharacter
{
protected:
    string m_race;

public:
    Monster(int x)
    {

    }

    Monster()
    {

    }

};
#endif // C_MONSTERCHARACTER_H

