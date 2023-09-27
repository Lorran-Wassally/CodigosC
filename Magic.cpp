#include <iostream>
#include <string>
using std::cout;
using std::string;

#include "Magic.h"
Magic::Magic( ):damage(10),mana(2),name("Magic Missile"),MAXDAMAGE(500)
{
   //damage = 10;
   //mana = 2;
   //name = "Magic Missile";
}

Magic::Magic(double damage, int mana, string name, double MAXDAMAGE)
:MAXDAMAGE(MAXDAMAGE)
{
    setDamage(damage);
    setMana(mana);
    setName(name);
}

Magic::Magic(const Magic& other)
:MAXDAMAGE(other.MAXDAMAGE)
{
    this->damage = other.damage;
    this->mana = other.mana;
    this->name = other.name;
}

int Magic::getDamage() const
{
    return damage;
}

int Magic::getMana() const
{
    return mana;
}

void Magic::setDamage(double damage)
{
    if(damage >= 0)
    {
        this->damage = damage;
        return;
    }
    this->damage = 0;
}

void Magic::setMana(int mana)
{
    if(mana >= 0)
    {
        this->mana = mana;
        return;
    }
    this->mana = 0;
}

void Magic::setName(string name)
{
    if(name != "")
    {
        this->name = name;
        return;
    }
    this->name = "Magic";
}

void Magic::print( ) const
{
    cout << "Name: "   << name << '\n';
    cout << "Damage: "   << damage << '\n';
    cout << "Mana: " << mana << '\n';
    cout << "Max Damage: " << MAXDAMAGE << '\n';
}