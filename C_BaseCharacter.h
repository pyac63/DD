#ifndef C_BASECHARACTER_H
#define C_BASECHARACTER_H

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

class BaseCharacter
{
protected:
    int m_str;
    int m_dex;
    int m_con;
    int m_int;
    int m_wis;
    int m_cha;
    int m_ca;
    int m_hp;
    int m_speed;
    int m_level;
    int m_strMod;
    int m_dexMod;
    int m_conMod;
    int m_intMod;
    int m_wisMod;
    int m_chaMod;
    int m_size;
    string m_name;
    bool m_alive = true;

    BaseCharacter(int str, int ca, int hp, string name)
        : m_str(str), m_ca(ca), m_hp(hp), m_name(name)
    {
    }

public:
    BaseCharacter(){}

    void setStr(int x) {m_str = x;}
    void setDex(int x) {m_dex = x;}
    void setCon(int x) {m_con = x;}
    void setInt(int x) {m_int = x;}
    void setWis(int x) {m_wis = x;}
    void setCha(int x) {m_cha = x;}
    void setCa(int x) {m_ca = x;}
    void setHp(int x) {m_hp = x;}
    void setSpeed(int x) {m_speed = x;}
    void setLevel(int x) {m_level = x;}
    void setStrMod(int x) {m_strMod = x;}
    void setDexMod(int x) {m_dexMod = x;}
    void setConMod(int x) {m_conMod = x;}
    void setIntMod(int x) {m_intMod = x;}
    void setWisMod(int x) {m_wisMod = x;}
    void setChaMod(int x) {m_chaMod = x;}
    void setSize(int x) {m_size = x;}
    void setName(string x) {m_name = x;}
    void isDead() {m_alive = false;}
    void setState(bool x) {m_alive = x;}

    int getStr() const {return m_str;}
    int getDex() const {return m_dex;}
    int getCon() const {return m_con;}
    int getInt() const {return m_int;}
    int getWis() const {return m_wis;}
    int getCha() const {return m_cha;}
    int getCa()  const {return m_ca;}
    int getHp()  const {return m_hp;}
    int getSpeed() const {return m_speed;}
    int getLevel() const {return m_level;}
    int getStrMod() const {return m_strMod;}
    int getDexMod() const {return m_dexMod;}
    int getConMod() const {return m_conMod;}
    int getIntMod() const {return m_intMod;}
    int getWisMod() const {return m_wisMod;}
    int getChaMod() const {return m_chaMod;}
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
