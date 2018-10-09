#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef VECTOR_2D_H
#define VECTOR_2D_H
struct Vector2D {
	Vector2D(int x, int y) :x(x), y(y) {
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

#endif // !VECTOR_2D_H
