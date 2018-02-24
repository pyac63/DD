#ifndef F_DECLA_H
#define F_DECLA_H


#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>
#include "C_BaseCharacter.h"
#include "C_PlayerCharacter.h"
#include "C_MonsterCharacter.h"


using namespace std;

bool game(Player *player);
Player* createPlayer(int str, int ca, int hp, string name);
Monster* createMonster(int str, int ca, int hp, string name);
string enterName();
int enterHp();
int enterStr();
int enterCa();
void printPlayer (const Player &test);
void printMonster (const Monster &test);
int getRandomNumber(int min, int max);
bool checkRollCrit(int x);
bool checkRollFail(int x);
int rollD4();
int rollD6();
int rollD8();
int rollD10();
int rollD12();
int rollD20(char character);
int rollD100();
Weapon* createWeapon(int x);



#endif // F_DECLA_H
