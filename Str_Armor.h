#ifndef STR_WEAPON_H
#define STR_WEAPON_H

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

struct Weapon
    {
        string armorName;
        /*
            *int armorType will have the followings
            * 1 for light
            * 2 for intermediate
            * 3 for heavy
            * 4 for shield
        */
        int armorType;
        int getCa;
    };

#endif // STR_WEAPON
