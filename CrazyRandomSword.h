/*
 * File:   CrazyRandomSword.h
 * Author: Nicholas <nja14@my.fsu.edu>
 *
 * Created on October 13, 2017, 10:30 PM
 */

#include <string>
#include "Weapon.h"
#include <stdlib.h>
#include <time.h>

#ifndef CRAZYSWORD_H
#define CRAZYSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = 10-100, it ignores armor of a random amount)
 */

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", (10.0 + (rand() % 91))){
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif /* CRAZYSWORD_H */


