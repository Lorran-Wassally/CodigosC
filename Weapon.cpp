#include <iostream>
#include <string>
#include <random>
using std::cout;
using std::string;
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 20);

#include "Weapon.h"

Weapon::Weapon( ):damage(10),weight(2.0),price(5.3),name("Basic Sword"),MAXDAMAGE(500)
{
   //damage = 10;
   //weight = 2;
   //name = "Basic Sword";
}

Weapon::Weapon(double damage, double weight, double price, string name, double MAXDAMAGE)
:MAXDAMAGE(MAXDAMAGE)
{
    setDamage(damage);
    setWeight(weight);
    setPrice(price);
    setName(name);
}

Weapon::Weapon(const Weapon& other)
:MAXDAMAGE(other.MAXDAMAGE)
{
    this->damage = other.damage;
    this->weight = other.weight;
    this->price = other.price;
    this->name = other.name;
}

int Weapon::getDamage() const
{
    return damage;
}

double Weapon::getWeight() const
{
    return weight;
}

double Weapon::getPrice() const
{
    return price;
}

void Weapon::setDamage(double damage)
{
    if(damage >= 0)
    {
        this->damage = damage;
        return;
    }
    this->damage = 0;
}

void Weapon::setWeight(double weight)
{
    if(weight >= 0)
    {
        this->weight = weight;
        return;
    }
    this->weight = 0;
}

void Weapon::setPrice(double price)
{
    if (price >= 0)
    {
        this->price = price;
        return;
    }
    this->price = 0;
}

void Weapon::setName(string name)
{
    if(name != "")
    {
        this->name = name;
        return;
    }
    this->name = "Weapon";
}

void Weapon::print( ) const
{
    cout << "Name: "   << name << '\n';
    cout << "Damage: "   << damage << '\n';
    cout << "Weight: " << weight << '\n';
    cout << "Price: " << price << '\n';
    cout << "Max Damage: " << MAXDAMAGE << '\n';
}

void Weapon::hit()
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