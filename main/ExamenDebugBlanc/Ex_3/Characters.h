#include "pch.h"
#include <iostream>
//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#ifndef Characters_h
#define Characters_h


class Hero;
class Monster;
class Character;



class Character
{
public:
	Character(int, int, int, int);
	virtual void takeDamage(int damage);
	virtual bool isAlive() = 0;
	virtual void death() = 0;

	int getHealth();
	int getDefense();
	int getAttack();
protected:
	int health;
	int attack;
	int defense;
	int strength;
};


class Monster : public Character
{

public:
	Monster(int, int, int, int);
	void takeDamage(int damage);
	void fight(Hero*);
	bool isAlive();
	void death();
};

class Hero : public Character
{
public:
	Hero(int, int, int, int);
	void takeDamage(int damage);
	void fight(Monster*);
	bool isAlive();
	void death();
};



#endif /* Characters_h */
