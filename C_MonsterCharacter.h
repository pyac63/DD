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

    Monster(int str, int ca, int hp, string name)
        : BaseCharacter(str, ca, hp, name)
    {
        m_cha = 15;
    }

    Monster(int x)
    {

    }






};
#endif // C_MONSTERCHARACTER_H

