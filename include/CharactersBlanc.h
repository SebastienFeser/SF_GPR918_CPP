#ifndef Characters_h
#define Characters_h

#include <iostream>

class Hero;
class Character;

class Character
{
public:
    Character(int, int, int, int);
    void takeDamage(int damage);
	bool isAlive();
    virtual void death() = 0;
    
    int getHealth();
    int getDefense();
protected:
    int health;
    int attack;
    int defense;
};

class Monster : public Character
{
    public:
    Monster(int, int, int, int);
    void takeDamage(int damage);
    void fight(Hero*);
    void death();
};

class Hero : public Character
{
private:
    Hero(int,int,int,int);
	void takeDamage(int damage);
    void fight(Monster*);
    void death();
};





#endif
