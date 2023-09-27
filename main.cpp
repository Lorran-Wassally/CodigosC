#include <iostream>
#include <string>
using std::cout;
using std::string;

#include "Magic.h"
#include "Magic.cpp"

int main( )
{  
    double damage = 50;
    int mana = 20;
    string name = "Fire Ball";
    const double MAXDAMAGE = 500;

    Magic magicMissile;
    magicMissile.print();
    Magic fireBall(damage, mana, name, MAXDAMAGE);
    fireBall.print();

    return 0;
}