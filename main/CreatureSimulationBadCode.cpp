#include <array>
#include <string>
#include <iostream>
#include <memory>
#include <random>
#include <list>

#include "D:\Git\SF_GPR918_CPP\build\Simulation.h"


void simulate() {
	Simulation simulation(445);
	simulation.init;
	simulation.star();

	std::cout << "Simulation ended" << std::endl;
}


int main()
{

	simulate();

	return 0;
}

