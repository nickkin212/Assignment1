/*
 * File:   CrazyRandomSword.cpp
 * Author: Nicholas <nja14@my.fsu.edu>
 *
 */

#include "CrazyRandomSword.h"
#include <time.h>
#include <stdlib.h>

double CrazyRandomSword::hit(double armor){
    double damage = 10.0 + (rand() % 91);
    int armorval = rand() % (static_cast<int>(armor) / 2);
    damage = damage - armorval;
    if(damage < 0)
    {
            return 0;
    }
    return damage;
}



