/*
calculer la racine d'un nombre
*/

#include "pch.h"
#include <iostream>
#include <cmath>		//pour le sqrt

using namespace std;

int main()
{
	double nombre(0), racine(0);
	cout << "Entrez un nombre positif : ";
	cin >> nombre;

	if (nombre < 0)
		cout << "ERREUR ton code est negatif" << endl << "Lien utile: https://apprendrealire.net/" << endl;
	else
	{
		racine = sqrt (nombre);
		cout << "La racine carree de " << nombre << " vaut " << racine << "." << endl;

	}

	system("pause");
}
