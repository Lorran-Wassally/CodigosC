#include <iostream>
#include <string>
using std::cout;
using std::string;

#include "Magic.h"
#include "Magic.cpp"
#include "Weapon.h"
#include "Weapon.cpp"

int main( )
{  
    double damageMM = 24;
    double damageFB = 36;
    double damageBS = 8;
    int mana = 20;
    double weight = 12.6;
    double price = 5.3;
    string nameMagic = "Fire Ball";
    string nameWeapon = "Basic Sword";
    const double MAXDAMAGE = 500;

    Magic magicMissile;
    //magicMissile.print();
    Magic fireBall(damageFB, mana, nameMagic, MAXDAMAGE);
    //fireBall.print();
    Weapon basicSword(damageBS, weight, price, nameWeapon, MAXDAMAGE);
    //basicSword.print();
    basicSword.hit();
    fireBall.hit();
    basicSword.hit();
    fireBall.hit();
    basicSword.hit();
    fireBall.hit();
    basicSword.hit();
    fireBall.hit();

    return 0;
}