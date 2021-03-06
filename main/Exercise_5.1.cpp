// Exercise 5.1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>

using namespace std;

int fib(int Nieme)
{

	int petit(0), moyen(1), grand(1);
	int result(-1);
		if (Nieme < 1)
			cout << "Error in code, return -1" << endl;
		else if (Nieme == 1)
			result = petit;
		else if (Nieme == 2)
			result = moyen;
		else if (Nieme == 3)
			result = grand;
		else {
			for (int i = 3; i < Nieme; i++)
			{
				petit = moyen;
				moyen = grand;
				grand = petit + moyen;
			}
			result = grand;
		}
		return result;


}

int main()
{
	int number, result;
	cout << "Entrez le Nieme chiffre de la suite fibonacci desire : ";
	cin >> number;
	result = fib(number);
	cout << "Le Nieme chiffre de la suite est : " << result << endl;

	system("pause");
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
