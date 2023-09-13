#include <iostream>
#include <string>
using std::cout;
using std::string;

#include "Magic.h"

Magic::Magic( )
{
   damage = 10;
   mana = 2;
   name = "Magic Missile";
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

Magic::Magic(double damage, int mana, string name)
{
    setDamage(damage);
    setMana(mana);
    setName(name);
}

void Magic::print( ) const
{
    cout << "Name: "   << name << '\n';
    cout << "Damage: "   << damage << '\n';
    cout << "Mana: " << mana << '\n';
}