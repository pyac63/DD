#include <iostream>
#include "Str_Weapon.h"

using namespace std;

Weapon* createWeapon(int x)
{
    string name;
    int roll;
    bitset<6> attributes;

    switch (x)
    {
    case 1:
        {
            name = "Sword";
            roll = 6;
            attributes = 0x8;
            break;
        }
    case 2:
        {
            name = "Axe";
            roll = 8;
            attributes = 0x8;
            break;
        }
    default:
        {
            name = "Fists";
            roll = 4;
            attributes = 0x0;
            break;
        }

    }

    return new Weapon{name, roll, 0, attributes};
}

