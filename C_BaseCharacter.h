#ifndef C_BASECHARACTER_H
#define C_BASECHARACTER_H

#include <iostream>
#include <random>
#include <ctime>
#include <vector>

using namespace std;

class BaseCharacter
{
protected:
    vector<int> m_caracArray {0, 0, 0, 0, 0, 0};
    vector<int> m_modArray {0, 0, 0, 0, 0, 0};
    int m_ca;
    int m_hp;
    int m_speed;
    int m_level;
    int m_size;
    string m_name;
    bool m_alive = true;




public:
    BaseCharacter(){}

    void setStr(int x) {m_caracArray.at(0) = x;}
    void setDex(int x) {m_caracArray.at(1) = x;}
    void setCon(int x) {m_caracArray.at(2) = x;}
    void setInt(int x) {m_caracArray.at(3) = x;}
    void setWis(int x) {m_caracArray.at(4) = x;}
    void setCha(int x) {m_caracArray.at(5) = x;}
    void setCa(int x) {m_ca = x;}
    void setHp(int x) {m_hp = x;}
    void setSpeed(int x) {m_speed = x;}
    void setLevel(int x) {m_level = x;}
    void setStrMod(int x) {m_modArray.at(0) = x;}
    void setDexMod(int x) {m_modArray.at(1) = x;}
    void setConMod(int x) {m_modArray.at(2) = x;}
    void setIntMod(int x) {m_modArray.at(3) = x;}
    void setWisMod(int x) {m_modArray.at(4) = x;}
    void setChaMod(int x) {m_modArray.at(5) = x;}
    void setSize(int x) {m_size = x;}
    void setName(string x) {m_name = x;}
    void isDead() {m_alive = false;}
    void setState(bool x) {m_alive = x;}

    int getStr() const {return m_caracArray.at(0);}
    int getDex() const {return m_caracArray.at(1);}
    int getCon() const {return m_caracArray.at(2);}
    int getInt() const {return m_caracArray.at(3);}
    int getWis() const {return m_caracArray.at(4);}
    int getCha() const {return m_caracArray.at(5);}
    int getCa()  const {return m_ca;}
    int getHp()  const {return m_hp;}
    int getSpeed() const {return m_speed;}
    int getLevel() const {return m_level;}
    int getStrMod() const {return m_modArray.at(0);}
    int getDexMod() const {return m_modArray.at(1);}
    int getConMod() const {return m_modArray.at(2);}
    int getIntMod() const {return m_modArray.at(3);}
    int getWisMod() const {return m_modArray.at(4);}
    int getChaMod() const {return m_modArray.at(5);}
    int getSize() const {return m_size;}
    string getName() const {return m_name;}
    bool getAlive() const {return m_alive;}

    friend int rollD4();
    friend int rollD6();
    friend int rollD8();
    friend int rollD10();
    friend int rollD12();
    friend int rollD20(char character);
    friend int rollD100();

};

#endif // C_BASECHARACTER_H
