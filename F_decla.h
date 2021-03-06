#ifndef F_DECLA_H
#define F_DECLA_H


#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>
#include "C_BaseCharacter.h"
#include "C_PlayerCharacter.h"
#include "C_MonsterCharacter.h"


using namespace std;

void intro();
bool game(Player *player);
Player* createPlayer();
Monster* createMonster();
string enterName();
int enterHp();
int enterStr();
int enterCa();
void printPlayer (const Player &test);
void printMonster (const Monster &test);
int getRandomNumber(int min, int max);
bool checkRollCrit(int x);
bool checkRollFail(int x);
int rollD20(char character);
int rollD100();
Weapon* createWeapon(int x);
vector<int> getCaracRoll();



#endif // F_DECLA_H
