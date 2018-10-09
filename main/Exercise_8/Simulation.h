#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef SIMULATION_H
#define SIMULATION_H

class Simulation {
public:

	Map map;



	Simulation(int seed) :random(seed) {

	}

	void init() {
		
	}

	int getValueRandom(int min, int max) {									//ok donc il permet d'avoir une valeur random...
		
	}




private:

	int nbrCreatures;
	int nbrHunters;
	int nbrFoodStuff;

	std::default_random_engine random;



	void update() {



	}

	bool isEndSimulation() {
	}


};

#endif // !SIMULATION_H
