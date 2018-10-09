#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef CREATURE_H
#define CREATURE_H

class Creature : public GameObject {
public:

	Creature(Simulation * simulation, int hungerSpeedIncrement) :GameObject(simulation), hungerSpeedIncrement(hungerSpeedIncrement) {				//initialise la valeur creature en lui donnant 0% de faim			
		
	}




	void update() {
		
	}


private:

	int hungerPourcent;
	int hungerSpeedIncrement;

	//Return position. If food is not find, we return the value (-1,-1)
	Vector2D findnearbyFoodPosition() {
		
	}

	//Return position. If creature is not find, we return the value (-1,-1)
	Vector2D findnearbyCreaturePosition() {
		
	}



	void randomMove() {
		
	}
	void die() {
	}

	void incrementHunger() {
	}


};

#endif // !CREATURE_H

