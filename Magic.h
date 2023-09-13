#ifndef MAGIC_H
#define MAGIC_H
#include <string>
using std::string;

class Magic
{
public:
    Magic();
    Magic(double, int, string);

    int getDamage() const;
    int getMana() const;
    void setDamage(double);
    void setMana(int);
    void setName(string);
    void print( ) const;

private:

    double damage;
    int mana;
    string name;

};
#endif