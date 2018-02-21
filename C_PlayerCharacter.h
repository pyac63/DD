#ifndef C_PLAYERCHARACTER_H
#define C_PLAYERCHARACTER_H

#include <iostream>
#include <bitset>
#include "C_BaseCharacter.h"


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

    struct weapon
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

public:

    Player(int str, int ca, int hp, string name)
        : BaseCharacter(str, ca, hp, name)
    {
    }



};
#endif // C_PLAYERCHARACTER_H
