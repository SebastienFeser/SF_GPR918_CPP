#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
class GameObject {

public:
	GameObject(Simulation * simulation, Vector2D position) :simulation(simulation), position(position) {

	}


	GameObject(Simulation * simulation) :simulation(simulation) {
	}

	virtual void update() {

	}

	virtual void start() {

	}

	virtual char getImage() {
	}

	Vector2D getPosition() {
	}

	void setPosition(Vector2D position) {
	}

	bool isObjectDestroyed() {
	}

	void destroy() {
	}


protected:
	Vector2D position;
	Simulation * simulation;
	bool isDestroyed;

};
#endif // !GAMEOBJECT_H
