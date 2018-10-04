/*
Demander la hauteur et la longeur d'un rectangle puis sortir le périmètre et l'aire
(Pourquoi ne pas créer une fonction)
*/
#include "pch.h"
#include <iostream>

using namespace std;

//Fonction qui calcule le périmètre
int perimeter(int width, int height)
{
	int solution;
	solution = 2 * width + 2 * height;

	return solution;
}

//Fonction qui calcule l'aire
int area(int width, int height)
{
	int solution;
	solution = width * height;

	return solution;
}

int main()
{
	int longeur(0), hauteur(0), perimetre(0), aire(0);
	
	do {
		cout << "Calcul d'Aire et de Perimetre d'un rectangle" << endl << "Entrez la longueur: ";
		cin >> longeur;
		cout << "Entrez la hauteur: ";
		cin >> hauteur;
		if (hauteur < 0 || longeur < 0)
			cout << "Attention, les deux valeurs doivent etre positives!" << endl << endl;
	} while (longeur < 0 || hauteur < 0);


	perimetre = perimeter(longeur, hauteur);
	aire = area(longeur, hauteur);

	cout << endl << endl << "Perimetre du rectangle: " << perimetre << endl << "Aire du rectangle: " << aire << endl;

	system("pause");



}

