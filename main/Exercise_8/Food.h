#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef FOOD_H
#define FOOD_H
class Food : public GameObject {
public:
	Food(Simulation * simulation) :GameObject(simulation) {

	}

	char getImage() {
	}

};


#endif // !FOOD_H

