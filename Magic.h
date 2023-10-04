#ifndef MAGIC_H
#define MAGIC_H
#include <string>
using std::string;

class Magic
{
public:
    Magic();
    Magic(double, int, string, const double);
    Magic(const Magic&);

    int getDamage() const;
    int getMana() const;
    void setDamage(double);
    void setMana(int);
    void setName(string);
    void print( ) const;
    void hit();

private:

    double damage;
    int mana;
    int hitMagic;
    string name;
    const double MAXDAMAGE;

};
#endif