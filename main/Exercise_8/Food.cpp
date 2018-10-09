#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#include "Food.h"
#include "Simulation.h"
#include "GameObject.h"

class Food : public GameObject {
public:
	Food(Simulation * simulation) :GameObject(simulation) {

	}

	char getImage() {
		return 'F';
	}

};
