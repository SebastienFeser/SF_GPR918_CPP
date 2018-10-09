#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#ifndef MAP_H
#define MAP_H

class Map {
public:
	Map() {
		}

	}

	bool AddGameObjectAt(GameObject * gameObject) {

	}

	bool AddGameObjectAt(GameObject * gameObject, int positionX, int positionY) {

	}

	GameObject & getContentAtPosition(Vector2D position) {

	}

	template<typename T> bool gameObjectOfTypeExistAt(Vector2D position) {

	}


	bool gameObjectExistAt(Vector2D position) {

	}

	bool RemoveObjectAt(Vector2D position) {

	}

	bool MoveGameObjetTo(GameObject & gameObject, int positionX, int positionY) {
	
	}

	void update() {

		
	}

	void DisplayMap() {
		
	}

	int countCreaturesInMap() {
		
	}

private:
	std::array<std::array<GameObject*, MAP_SIZE>, MAP_SIZE> map;
	std::list<GameObject * > gameObjectsForUpdate;




};

#endif // !MAP_H
