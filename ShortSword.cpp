#include <iostream>
#include <string>
#include <random>
using std::cout;
using std::string;
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 20);

#include "ShortSword.h"
#include "Weapon.h"
#include "Weapon.cpp"

ShortSword:: ShortSword():damage(10),weight(2.0),price(5.3),name("Basic Sword"),MAXDAMAGE(500)
{
   //damage = 10;
   //weight = 2;
   //name = "Short Sword";
   static string stat = "Dex";
}

ShortSword::ShortSword(double damage, double weight, double price, string name, string stat, double MAXDAMAGE)
:MAXDAMAGE(MAXDAMAGE)
{
    setDamage(damage);
    setWeight(weight);
    setPrice(price);
    setName(name);
    setStat(stat);
}

ShortSword::ShortSword(const ShortSword& other)
:MAXDAMAGE(other.MAXDAMAGE)
{
    this->damage = other.damage;
    this->weight = other.weight;
    this->price = other.price;
    this->name = other.name;
}

int ShortSword::getDamage() const
{
    return damage;
}

double ShortSword::getWeight() const
{
    return weight;
}

double ShortSword::getPrice() const
{
    return price;
}

string ShortSword::getStat() const
{
    return stat;
}

void ShortSword::setDamage(double damage)
{
    if(damage >= 0)
    {
        this->damage = damage;
        return;
    }
    this->damage = 0;
}

void ShortSword::setWeight(double weight)
{
    if(weight >= 0)
    {
        this->weight = weight;
        return;
    }
    this->weight = 0;
}

void ShortSword::setPrice(double price)
{
    if (price >= 0)
    {
        this->price = price;
        return;
    }
    this->price = 0;
}

void ShortSword::setName(string name)
{
    if(name != "")
    {
        this->name = name;
        return;
    }
    this->name = "Weapon";
}

void ShortSword::setStat(string stat)
{
    if(stat != "")
    {
        this->stat = stat;
        return;
    }
    this->stat = "Weapon";
}

void ShortSword::print( ) const
{
    cout << "Name: "   << name << '\n';
    cout << "Damage: "   << damage << '\n';
    cout << "Weight: " << weight << '\n';
    cout << "Price: " << price << '\n';
    cout << "Stat: " << stat << '\n';
    cout << "Max Damage: " << MAXDAMAGE << '\n';
}

void ShortSword::hit()
{
    hitWeapon = dist(rd);
    cout << "hitWeapon: " << hitWeapon << '\n';
    if (hitWeapon >= 10)
    {
        cout << "Hit\n";
        return;
    }
    cout << "Miss\n";
}