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

    Magic magicMissile;
    magicMissile.print();
    Magic fireBall(damage, mana, name);
    fireBall.print();

    return 0;
}