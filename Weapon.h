#ifndef WEAPON_H
#define WEAPON_H
#include <string>
using std::string;

class Weapon
{
public:
    Weapon();
    Weapon(double, double, double, string, const double);
    Weapon(const Weapon&);

    int getDamage() const;
    double getWeight() const;
    double getPrice() const;
    void setDamage(double);
    void setWeight(double);
    void setPrice(double);
    void setName(string);
    void print() const;
    void hit();

private:

    double damage;
    double weight;
    double price;
    int hitWeapon;
    string name;
    const double MAXDAMAGE;

};
#endif