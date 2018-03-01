#include <iostream>
#include <vector>
#include <algorithm>
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
    cout << "You will fight with a " << weapon->getWeaponName() << '\n';
    cout << "The damage die will be a d" << weapon->getWeaponDamageRoll() << '\n';
    if (weapon2 != nullptr)
    {
        cout << "You will also fight with a " << weapon2->getWeaponName() << '\n';
        cout << "The damage die will be a d" << weapon2->getWeaponDamageRoll() << '\n';
    }
}

void Player::assignCaracRoll(const vector<int> &vect)
{
    caracRoll = vect;
}

void Player::printCaracAndMod()
{
    for (int x = 0; x < 6; ++x)
    {
        cout << x+1 << ") " << caracName.at(x) << "\t*Set with: " << m_caracArray.at(x) << "* Mod is: " << m_modArray.at(x) << "*\n";
    }
    cout << "\n\n";
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

int Player::getInput1to6()
{
    while (1)
    {
        cout << "To which Characteristic do you want to assign it ?" << "\n\n";
        for (int countup = 0; countup < 6; ++countup)
        {
            if (m_caracArray.at(countup) != 0)
            {
                cout << countup+1 << ") " << caracName.at(countup) << "\t*Set with " << m_caracArray.at(countup) << "*\n";
            }
            else
                cout << countup+1 << ") " << caracName.at(countup) << endl;
        }
        int check;
        cin >> check;
        if (check < 1 || check > 6)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "\n*Please enter a number.*\n\n";
            }
            else
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "\n*Invalid entry, please retry.*\n\n";
            }

        }
        else if (m_caracArray.at(check-1) != 0)
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "\n*You already set your " << caracName.at(check-1) << "!. Please set another one.*\n\n";
        }
        else
        {
            cin.ignore(32767, '\n');
            return check;
        }

    }
}

void Player::assignCaracAndMod()
{
    vector<int> temp = caracRoll;
    sort(temp.begin(), temp.end());
    cout << "\nYour characteristics rolls are ready, " << m_name << "!\n\n";
    for (int iterate = 0; iterate < 6; ++iterate)
    {

            int result = temp.back();
            cout << "Your highest roll is " << result << endl;
            int x = getInput1to6();
            m_caracArray.at(x-1) = result;
            m_modArray.at(x-1) = getCaracMod(result);
            cout << "You assigned " << m_caracArray.at(x-1) << " to " << caracName.at(x-1) << ". Your " << caracName.at(x-1) << " modifier will be: " << m_modArray.at(x-1) << "\n\n";

            temp.pop_back();
            //--countDown;


    }
}

int Player::getWeaponDamage()
{
    int toReturn;
    int die = weapon->getWeaponDamageRoll();
    switch (die)
    {
    case 4:
        toReturn = weapon->rollD4();
        break;
    case 6:
        toReturn = weapon->rollD6();
        break;
    case 8:
        toReturn = weapon->rollD8();
        break;
    case 10:
        toReturn = weapon->rollD10();
        break;
    case 12:
        toReturn = weapon->rollD12();
        break;
    case 66:
        toReturn = weapon->rollD6()+weapon->rollD6();
        break;
    default:
        toReturn  =weapon->rollD4();
        break;
    }
    return toReturn;

}

int Player::getDamage()
{
    return getWeaponDamage()+m_modArray.at(0);
}

