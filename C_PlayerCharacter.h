#ifndef C_PLAYERCHARACTER_H
#define C_PLAYERCHARACTER_H

#include <iostream>
#include <bitset>
#include "C_BaseCharacter.h"
#include "Str_Weapon.h"

using namespace std;

class Player : public BaseCharacter
{
protected:
    string m_race;
    string m_class;
    /*
    * Next bitset serves for the saving throws proficiencies,
    * Index are the followings:
    * 0 : Strength Saving Throw
    * 1 : Dexterity Saving Throw
    * 2 : Constitution Saving Throw
    * 3 : Intelligence Saving Throw
    * 4 : Wisdom Saving Throw
    * 5 : Charisma Saving Throw
    */
    bitset<6> savingThrowProficiencies;
    /*
    * Next bitset serves for the skills proficiencies,
    * Index are the followings :
    * 0 : Acrobatics
    * 1 : Animal Handling
    * 2 : Arcana
    * 3 : Athletics
    * 4 : Deception
    * 5 : History
    * 6 : Insight
    * 7 : Intimidation
    * 8 : Investigation
    * 9 : Medicine
    * 10 : Nature
    * 11 : Perception
    * 12 : Performance
    * 13 : Persuasion
    * 14 : Religion
    * 15 : Sleight of Hand
    * 16 : Stealth
    * 17 : Survival
    */
    bitset<18> skillsProficiencies;










public:

    Player(int str, int ca, int hp, string name)
        : BaseCharacter(str, ca, hp, name)
    {
    }


    ~Player()
    {
        delete weapon;
        weapon = nullptr;
        delete weapon2;
        weapon2 = nullptr;
    }

    Weapon* weapon = nullptr;
    Weapon* weapon2 = nullptr;

    void assignWeapon (Weapon* &weaponToAssign)
    {
        if (weapon == nullptr)
        {
            weapon = weaponToAssign;
        }
        else if (weapon != nullptr)
        {
            weapon2 = weaponToAssign;
        }


    }


    void printWeapon()
    {
        cout << "You will fight with a " << weapon->weaponName << '\n';
        cout << "The damage die will be a d" << weapon->weaponDamageRoll << '\n';
        cout << weapon->weaponAttributes << '\n';
        if (weapon2 != nullptr)
        {
            cout << "You will also fight with a " << weapon2->weaponName << '\n';
            cout << "The damage die will be a d" << weapon2->weaponDamageRoll << '\n';
        }
    }

};
#endif // C_PLAYERCHARACTER_H
