#ifndef STR_WEAPON_H
#define STR_WEAPON_H

#include <iostream>
#include <string>
#include <bitset>

using namespace std;

struct Weapon
    {
        string weaponName;
        int weaponDamageRoll;
        int weaponVersatileDamageRoll;
        /*
        * Next bitset serves for the weapon's attributes,
        * Index are the followings:
        * 0 : Two Handed
        * 1 : Finesse
        * 2 : Heavy
        * 3 : Light
        * 4 : Thrown
        * 5 : Versatile
        */
        bitset<6> weaponAttributes;


    };

#endif // STR_WEAPON
