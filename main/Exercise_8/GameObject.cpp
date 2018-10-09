#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#include "GameObject.h"
#include "Simulation.h"
#include "Vector2D.h"

class GameObject {

public:
	GameObject(Simulation * simulation, Vector2D position) :simulation(simulation), position(position) {

	}


	GameObject(Simulation * simulation) :simulation(simulation) {
		isDestroyed = false;
	}

	virtual void update() {

	}

	virtual void start() {

	}

	virtual char getImage() {
		return '?';
	}

	Vector2D getPosition() {
		return position;
	}

	void setPosition(Vector2D position) {
		this->position = position;
	}

	bool isObjectDestroyed() {
		return isDestroyed;
	}

	void destroy() {
		isDestroyed = true;
	}


protected:
	Vector2D position;
	Simulation * simulation;
	bool isDestroyed;

};