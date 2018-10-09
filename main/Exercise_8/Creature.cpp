#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#include "Creature.h"
#include "Simulation.h"
#include "GameObject.h"
#include "Vector2D.h"


class Creature : public GameObject
{
public:

	Creature(Simulation * simulation, int hungerSpeedIncrement) :GameObject(simulation), hungerSpeedIncrement(hungerSpeedIncrement) {				//initialise la valeur creature en lui donnant 0% de faim			
		hungerPourcent = 0;


	}




	void update() {
		if (isDestroyed) {
			return;
		}
		randomMove();
		incrementHunger();
		if (hungerPourcent >= 100) {
			die();
			return;
		}

		Vector2D * foodPosition = &findnearbyFoodPosition();
		if (foodPosition->x >= 0) {

			GameObject & gameObject = simulation->map.getContentAtPosition(*foodPosition);
			if (!gameObject.isObjectDestroyed()) {
				gameObject.destroy();
				hungerPourcent = 0;
			}
		}

		//TODO Implement reproduction method
		Vector2D * creaturePosition = &findnearbyCreaturePosition();
		if (creaturePosition->x >= 0) {
			Map map;
			map.AddGameObjectAt((GameObject*)GameObjectBuilder::buildCreature());


		}


	}
	char getImage() {
		return 'C';
	}


private:

	int hungerPourcent;
	int hungerSpeedIncrement;

	//Return position. If food is not find, we return the value (-1,-1)
	Vector2D findnearbyFoodPosition() {
		Vector2D positionCentral = position;
		for (int x = positionCentral.x - 1; x < positionCentral.x + 3; x++) {
			if (x < 0 || x >= MAP_SIZE) {
				continue;
			}
			for (int y = positionCentral.y - 1; y < positionCentral.y + 3; y++) {
				if (y < 0 || y >= MAP_SIZE) {
					continue;
				}
				Vector2D currentPosition(x, y);
				if (simulation->map.gameObjectOfTypeExistAt<Food>(currentPosition)) {

					return currentPosition;
				}
			}
		}

		return Vector2D(-1, -1);
	}

	//Return position. If creature is not find, we return the value (-1,-1)
	Vector2D findnearbyCreaturePosition() {
		Vector2D positionCentral = position;
		for (int x = positionCentral.x - 1; x < positionCentral.x + 3; x++) {
			if (x < 0 || x >= MAP_SIZE) {
				continue;
			}
			for (int y = positionCentral.y - 1; y < positionCentral.y + 3; y++) {
				if (y < 0 || y >= MAP_SIZE) {
					continue;
				}
				Vector2D currentPosition(x, y);
				if (simulation->map.gameObjectOfTypeExistAt<Creature>(currentPosition)) {

					return currentPosition;
				}
			}
		}

		return Vector2D(-1, -1);

	}



	void randomMove() {
		int positionXMin = position.x - 1;
		if (positionXMin < 0)
			positionXMin = 0;
		int positionXMax = position.x + 1;
		if (positionXMax >= MAP_SIZE)
			positionXMax = MAP_SIZE - 1;

		int positionYMin = position.y - 1;
		if (positionYMin < 0)
			positionYMin = 0;
		int positionYMax = position.y + 1;
		if (positionYMax >= MAP_SIZE)
			positionYMax = MAP_SIZE - 1;
		int newX = simulation->getValueRandom(positionXMin, positionXMax);
		int newY = simulation->getValueRandom(positionYMin, positionYMax);
		simulation->map.MoveGameObjetTo(*this, newX, newY);
	}
	void die() {

		isDestroyed = true;
	}

	void incrementHunger() {
		hungerPourcent += hungerSpeedIncrement;
	}


};
