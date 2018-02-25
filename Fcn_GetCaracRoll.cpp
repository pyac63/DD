#include <iostream>
#include <vector>
#include <utility>
#include "F_decla.h"

using namespace std;

vector<int> getCaracRoll()
{
    vector<int> get6Roll;
    for (int totalroll = 0; totalroll < 6; ++totalroll)
    {
        int roll1 = getRandomNumber(1, 6);
        int roll2 = getRandomNumber(1, 6);
        int roll3 = getRandomNumber(1, 6);
        int roll4 = getRandomNumber(1, 6);
        vector<int> arrayRoll {roll1, roll2, roll3, roll4};

        for (unsigned int startIndex = 0; startIndex < arrayRoll.size(); ++startIndex)
        {
            int smallestRoll = startIndex;
            for (unsigned int currentIndex = startIndex +1; currentIndex < arrayRoll.size(); ++currentIndex )
            {
                if (arrayRoll[currentIndex] < arrayRoll[smallestRoll])
                    smallestRoll = currentIndex;
            }
            swap(arrayRoll.at(3), arrayRoll[smallestRoll]);
        }

        arrayRoll.pop_back();
        int carac = 0;
        for (auto const &element: arrayRoll)
            carac += element;

        get6Roll.push_back(carac);
    }

    return get6Roll;
}
