#ifndef SHORTSWORD_H
#define SHORTSWORD_H
#include <string>
using std::string;

class ShortSword: public Weapon
{
public:
    ShortSword();
    ShortSword(double, double, double, string, static string, const double);
    ShortSword(const ShortSword&);

    int getDamage() const;
    double getWeight() const;
    double getPrice() const;
    void setDamage(double);
    void setWeight(double);
    void setPrice(double);
    void setName(string);
    string getStat() const;
    void setStat(string);
    void print() const;
    void hit();

private:

    double damage;
    double weight;
    double price;
    int hitWeapon;
    string name;
    static string stat;
    const double MAXDAMAGE;

};
#endif