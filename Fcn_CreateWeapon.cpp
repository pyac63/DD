#include <iostream>
#include "Str_Weapon.h"

using namespace std;

Weapon* createWeapon(int x)
{
    string name;
    int roll;
    int rollversatile;
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
    bitset<6> attributes;
    bool commom = false;
    bool war = false;

    switch (x)
    {
    case 1:
        {
            name = "Quarterstaff";
            roll = 6;
            rollversatile = 8;
            attributes = 32;
            commom = true;
            break;
        }
    case 2:
        {
            name = "Dagger";
            roll = 4;
            rollversatile = 0;
            attributes = 26;
            commom = true
            break;
        }
    case 3:
        {
            name = "Club";
            roll = 4;
            rollversatile = 0;
            attributes = 8;
            commom = true;
            break;
        }
    case 4:
        {
            name = "Handaxe";
            roll = 6;
            rollversatile = 0;
            attributes = 24;
            commom = true;
            break;
        }
    case 5:
        {
            name = "Javelin";
            roll = 6;
            rollversatile = 0;
            attributes = 16;
            commom = true;
            break;
        }
    case 6:
        {
            name = "Spear";
            roll = 6;
            rollversatile = 8;
            attributes = 48;
            commom = true;
            break;
        }
    case 7:
        {
            name = "Light Hammer";
            roll = 4;
            rollversatile = 0;
            attributes = 24;
            commom = true;
            break;
        }
    case 8:
        {
            name = "Mace";
            roll = 6;
            rollversatile = 0;
            attributes = 0;
            commom = true;
            break;
        }
    case 9:
        {
            name = "Great Club";
            roll = 8;
            rollversatile = 0;
            attributes = 1;
            commom = true;
            break;
        }
    case 10:
        {
            name = "Sickle";
            roll = 4;
            rollversatile = 0;
            attributes = 8;
            commom = true;
            break;
        }
    case 11:
        {
            name = "Scimitar";
            roll = 6;
            rollversatile = 0;
            attributes = 10;
            war = true;
            break;
        }
    case 12:
        {
            name = "Glaive";
            roll = 10;
            rollversatile = 0;
            attributes = 5;
            war = true;
            break;
        }
    case 13:
        {
            name = "Greatsword";
            roll = 12;
            rollversatile = 0;
            attributes = 10;
            war = true;
            break;
        }
    case 14:
        {
            name = "Shortsword";
            roll = 6;
            rollversatile = 0;
            attributes = 10;
            war = true;
            break;
        }
    case 15:
        {
            name = "Longsword";
            roll = 8;
            rollversatile = 10;
            attributes = 32;
            war = true;
            break;
        }
    case 16:
        {
            name = "Flail";
            roll = 8;
            rollversatile = 0;
            attributes = 0;
            war = true;
            break;
        }
    case 17:
        {
            name = "Whip";
            roll = 4;
            rollversatile = 0;
            attributes = 2;
            war = true;
            break;
        }
    case 18:
        {
            name = "Greataxe";
            roll = 12;
            rollversatile = 0;
            attributes = 5;
            war = true;
            break;
        }
    case 19:
        {
            name = "Battleaxe";
            roll = 8;
            rollversatile = 10;
            attributes = 32;
            war = true;
            break;
        }
    case 20:
        {
            name = "Halberd";
            roll = 10;
            rollversatile = 0;
            attributes = 5;
            war = true;
            break;
        }
    case 21:
        {
            name = "Lance";
            roll = 12;
            rollversatile = 0;
            attributes = 0;
            war = true;
            break;
        }
    case 22:
        {
            name = "Maul";
            roll = 12;
            rollversatile = 0;
            attributes = 5;
            war = true;
            break;
        }
    case 23:
        {
            name = "Warhammer";
            roll = 8;
            rollversatile = 10;
            attributes = 32;
            war = true;
            break;
        }
    case 24:
        {
            name = "Morningstar";
            roll = 8;
            rollversatile = 0;
            attributes = 0;
            war = true;
            break;
        }
    case 25:
        {
            name = "War pick";
            roll = 8;
            rollversatile = 0;
            attributes = 0;
            war = true;
            break;
        }
    case 26:
        {
            name = "Pike";
            roll = 10;
            rollversatile = 0;
            attributes = 5;
            war = true;
            break;
        }
    case 27:
        {
            name = "Rapier";
            roll = 8;
            rollversatile = 0;
            attributes = 2;
            war = true;
            break;
        }
    case 28:
        {
            name = "Trident";
            roll = 6;
            rollversatile = 8;
            attributes = 48;
            war = true;
            break;
        }

    default:
        {
            name = "Fists";
            roll = 4;
            attributes = 0;
            break;
        }

    }

    return new Weapon{name, roll, 0, attributes};
}

