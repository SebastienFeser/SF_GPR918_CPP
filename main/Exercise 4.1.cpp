#include "pch.h"
#include <iostream>
#include <vector>
#define N 5 //Nombres de valeurs à moyenner

using namespace std;

int main()
{
	// Entrer un vecteur et double résultat
	vector<int>  values;
	int enter;
	double result(0);

	// Boucle demander et recevoir les int
	for (int i = 0; i < N; i++)
	{
		cout << "Entrez le numero en position " << i << " : ";
		cin >> enter;
		values.push_back(enter);
	}

	// Calculer la moyenne
	for (auto& chocolat : values) {
		result += chocolat;

	}
	result = result / N;

	//Extraire moyenne
	cout << "La moyenne du vecteur est: " << result << endl;

	system("pause");



}
