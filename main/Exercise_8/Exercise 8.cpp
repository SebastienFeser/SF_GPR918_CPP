// CreatureSimulationBadCode.cpp : Defines the entry point for the console application.
//


/*
Cet exercice regroupe le 8.2, 8.3 et 8.4

J'ai pu terminer le 8.2, mais je n'ai pas réussi à faire le 8.3 et je n'ai réussi à terminer le 8.4


*/

#include "pch.h"
#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#include "Simulation.h"



void simulate() {
	Simulation simulation(445);
	simulation.init();
	simulation.star();

	std::cout << "Simulation ended" << std::endl;
}


int main()
{

	simulate();

	return 0;
}

