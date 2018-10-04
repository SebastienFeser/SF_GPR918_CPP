#include "pch.h"
#include <iostream>
#include <vector>
#define N 10

using namespace std;

int& max(vector<int>& calcul)
{
	int max(0);
	for (auto& chocolat : calcul)
	{
		if (chocolat > max)
			max = chocolat;
	}

	return max;
}

int& min(vector<int>& calcul)
{
	int min(calcul[0]);
	for (auto& chocolat : calcul)
	{
		if (chocolat < min)
			min = chocolat;
	}

	return min;
}

int main()
{
	vector<int> test;
	int chfVecteur(0), minimum(0), maximum(0);

	for (int i = 0; i < N; i++) {
		cout << "Enter the value " << i << " of the vector : ";
		cin >> chfVecteur;
		test.push_back(chfVecteur);
	}
	maximum = max(test);
	minimum = min(test);

	cout << "The maximum of the vector is " << maximum << ", and the minimum of the vector is " << minimum << endl;
	system("pause");


}
