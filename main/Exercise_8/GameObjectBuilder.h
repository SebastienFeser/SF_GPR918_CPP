#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef GAME_OBJECT_BUILDER_H
#define GAME_OBJECT_BUILDER_H

class  GameObjectBuilder {
public:
	static Creature * buildCreature(Simulation & simulation);
	static Food * buildFood(Simulation & simulation);

};

Creature *  GameObjectBuilder::buildCreature(Simulation & simulation) {
	Creature * creature = new Creature(&simulation, 20);
	int x = simulation.getValueRandom(0, MAP_SIZE - 1);
	int y = simulation.getValueRandom(0, MAP_SIZE - 1);
	creature->setPosition(Vector2D(x, y));

	return creature;


}

Food * GameObjectBuilder::buildFood(Simulation & simulation) {
	Food * food = new Food(&simulation);
	int x = simulation.getValueRandom(0, MAP_SIZE - 1);
	int y = simulation.getValueRandom(0, MAP_SIZE - 1);
	food->setPosition(Vector2D(x, y));
	return food;
}

#endif // !GAME_OBJECT_BUILDER_H

