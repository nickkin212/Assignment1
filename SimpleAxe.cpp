/*
 * File:   SimpleAxe.cpp
 * Author: Nicholas <nja14@my.fsu.edu>
 *
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
    double damage = hitPoints;
    if(armor >= 0.0 && armor <= 20.0)
    {
	    return damage;
    }
    else
    {	
	    damage = damage - armor;
    }
    if(damage < 0)
    {
	    return 0;
    }
    return damage;
}

