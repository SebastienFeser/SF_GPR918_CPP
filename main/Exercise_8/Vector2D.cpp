#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#include "Vector2D.h"

struct Vector2D {
	Vector2D(int x, int y) :x(x), y(y) {

	}
	Vector2D() {
		x = 0;
		y = 0;
	}
	int x;
	int y;
};



const int MAP_SIZE = 10;
class Map;
class Simulation;
class Creature;
class Food;
class Egg;