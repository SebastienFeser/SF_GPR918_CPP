/*
Le programme doit regarder si un chiffre estpaire ou impaire
*/
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int chiffre;
	cout << "Entrez un chiffre: ";
	cin >> chiffre;

	if (chiffre % 2 == 0)
		cout << "Le chiffre est pair" << endl;
	else
		cout << "Le chiffre est impair" << endl;

	cout << endl << "Fin du programme" << endl;
	system("pause");
}
