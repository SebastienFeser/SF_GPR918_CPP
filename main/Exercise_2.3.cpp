#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int nombre(0), diviseur(0);
	cout << "pour sortir du logiciel, ecrivez -1" << endl;
	while (0 == 0)
	{
		cout << endl << "Donnez votre chiffre : ";
		cin >> nombre;

		if (nombre == -1)
			break;

		diviseur = nombre - 1;

		while (0 == 0)
		{
			if (diviseur < 0)
			{
				cout << "ERREUR, veuillez entrer un chiffre positif" << endl;
				break;
			}

			if (diviseur == 0)
			{
				cout << nombre << " est un nombre premier" << endl;
				break;
			}

			if (nombre % diviseur == 0)
			{
				cout << nombre << " n'est pas un nombre premier" << endl;
				break;
			}

			if (diviseur <= 2)
			{
				cout << nombre << " est un nombre premier" << endl;
				break;
			}

			diviseur--;
		}


	}

	cout << endl << "Fin du Programme" << endl;

	system("pause");
}
