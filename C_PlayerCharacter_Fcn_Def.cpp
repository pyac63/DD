#include <iostream>
#include <vector>
#include "C_PlayerCharacter.h"

using namespace std;


void Player::assignWeapon (Weapon* &weaponToAssign)
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


void Player::printWeapon()
{
    cout << "You will fight with a " << weapon->weaponName << '\n';
    cout << "The damage die will be a d" << weapon->weaponDamageRoll << '\n';
    if (weapon2 != nullptr)
    {
        cout << "You will also fight with a " << weapon2->weaponName << '\n';
        cout << "The damage die will be a d" << weapon2->weaponDamageRoll << '\n';
    }
}

void Player::assignCaracRoll(const vector<int> &vect)
{
    caracRoll = vect;
}

void Player::printCarac()
{
    for (auto const &element: caracRoll)
        cout << element << " ";
    cout << "\n";
}

int Player::getCaracMod(int x)
{
    int mod;
    switch (x)
    {
        case 2:
            mod = -4;
            break;
        case 3:
            mod = -4;
            break;
        case 4:
            mod = -3;
            break;
        case 5:
            mod = -3;
            break;
        case 6:
            mod = -2;
            break;
        case 7:
            mod = -2;
            break;
        case 8:
            mod = -1;
            break;
        case 9:
            mod = -1;
            break;
        case 10:
            mod = 0;
            break;
        case 11:
            mod = 0;
            break;
        case 12:
            mod = 1;
            break;
        case 13:
            mod = 1;
            break;
        case 14:
            mod = 2;
            break;
        case 15:
            mod = 2;
            break;
        case 16:
            mod = 3;
            break;
        case 17:
            mod = 3;
            break;
        case 18:
            mod = 4;
            break;
        case 19:
            mod = 4;
            break;
        case 20:
            mod = 5;
            break;
       }
       return mod;
}


void Player::assignCaracAndMod()
{
    vector<int> temp = caracRoll;
    bool check = true;
    cout << "Your characteristics rolls are ready! \n";
    for (int iterate = 0; iterate < 6; ++iterate)
    {
        string name = caracName.at(iterate);
        cout << "Which one would you want to assign to " << name << " ?\n";
        int x;
        cin >> x;
        if (x == temp.at(0) || x == temp.at(1) || x == temp.at(2) || x == temp.at(3) || x == temp.at(5) || x == temp.at(5))
        {
            m_caracArray.at(iterate) = x;
            m_modArray.at(iterate) = getCaracMod(x);
            cout << "You assigned " << m_caracArray.at(iterate) << " to " << name << ". Your " << name << " modifier will be: " << m_modArray.at(iterate) << endl;
        }
    }
}

