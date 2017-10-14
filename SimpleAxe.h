/*
 * File:   SimpleAxe.h
 * Author: Nicholas <nja14@my.fsu.edu>
 *
 * Created on October 11, 2017, 10:30 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, it ignores armor if the armor is less than 20)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple axe", 60.0) {
    }
    virtual ~SimpleAxe() {};
    virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */

