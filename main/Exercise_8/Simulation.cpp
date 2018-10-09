#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#include "Map.h"
#include "Simulation.h"
#include "GameObject.h"
#include "GameObjectBuilder.h"
#include "Vector2D.h"
#include "Creature.h"
#include "Food.h"



class Simulation {
public:

	Map map;



	Simulation(int seed) :random(seed) {

	}

	void init() {
		//Create 5 creatures
		for (int i = 0; i < 5; i++) {
			map.AddGameObjectAt((GameObject*)GameObjectBuilder::buildCreature(*this));
		}


		//Create 6 foods 
		for (int i = 0; i < 6; i++) {
			map.AddGameObjectAt((GameObject*)GameObjectBuilder::buildFood(*this));
		}

	}
	void star() {
		while (isEndSimulation()) {
			update();
			map.DisplayMap();
		}
		std::cout << std::endl << "------ END OF SIMULATION -------------" << std::endl;
		system("Pause");
	}

	int getValueRandom(int min, int max) {									//ok donc il permet d'avoir une valeur random...
		std::uniform_int_distribution<int> distribution(min, max);
		int randomValue = distribution(random);
		return randomValue;
	}




private:

	int nbrCreatures;
	int nbrHunters;
	int nbrFoodStuff;

	std::default_random_engine random;



	void update() {

		map.update();


	}

	bool isEndSimulation() {
		return map.countCreaturesInMap();
	}


};
