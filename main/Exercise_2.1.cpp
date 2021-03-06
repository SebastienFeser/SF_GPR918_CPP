/*
Programme qui demande le rayon d'un cercle et qui calcule le périmètre et l'aire de celui-ci
*/

#include "pch.h"
#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846

using namespace std;

//Fonction qui calcule le périmètre
float perimeter(int radius)
{
	float solution;
	solution = radius * PI * 2;
		return solution;
}

//Fonction qui calcule l'aire
float area(int radius)
{
	float solution;
	solution = radius * radius * PI;
	return solution;
}

int main()
{
	
	float rayon(0), perimetre(0), aire(0);

	do {
		cout << "Logiciel de calcul d'aire et de perimetre d'un cercle" << endl << "Entrez le rayon: ";
		cin >> rayon;
		if (rayon < 0)
			cout << "Attention, votre chiffre doit être positif!" << endl << endl;
	} while (rayon < 0);

	perimetre = perimeter(rayon);
	aire = area(rayon);

	cout << endl << endl << "Perimetre du cercle: " << perimetre << endl << "Aire du cercle: " << aire << endl;

	system("pause");
}
