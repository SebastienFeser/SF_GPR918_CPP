// Exercise 3.0.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int numero(0), boucle(0);
	cout << "Je sais compter jusqu'a: ";
	cin >> numero;
	
	while (numero >= boucle)
	{
		cout << boucle << endl;
		boucle++;
	}

	system("pause");
}

