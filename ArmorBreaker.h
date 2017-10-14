/*
 * File:   ArmorBreaker.h
 * Author: Nicholas <nja14@my.fsu.edu>
 *
 * Created on October 13, 2017, 5:30 AM
 */

#include <string>
#include "Weapon.h"

#ifndef ARMORBREAKER_H
#define ARMORBREAKER_H

/**
 * Defines the behavior of a sword who's power increases by hitting more armor (hitpoint = 30, deals 1-3 damage extra for every 2 armor)
 */
class ArmorBreaker : public Weapon {
public:

    ArmorBreaker() : Weapon("Armor breaker", 30.0) {
    }
    virtual ~ArmorBreaker() {};
    virtual double hit(double armor);

};

#endif /* ARMORBREAKER_H */

