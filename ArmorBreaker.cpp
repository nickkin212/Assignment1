/*
 * File:   ArmorBreaker.cpp
 * Author: Nicholas <nja14@my.fsu.edu>
 *
 */

#include "ArmorBreaker.h"
#include <time.h>
#include <stdlib.h>

double ArmorBreaker::hit(double armor){
    double damage = hitPoints;
    for(int i = 0; i < (armor / 2); i++)
    {
	    /*
	     * Random values coded with help from this stack overflow post: https://stackoverflow.com/questions/822323/how-to-generate-a-random-number-in-c
	     */
	    damage = damage + 1 + (rand() % 3);
    }
    if(damage < 0)
    {
            return 0;
    }
    return damage;
}

