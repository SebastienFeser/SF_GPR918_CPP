#include "pch.h"
#include <iostream>
#define N 1000			//Constante pour calculer les multiples en dessous de cette valeur
using namespace std;

int main()
{
	int var1(3), var2(5), total(0), dawhile(1);

	while (var1*dawhile < N || var2*dawhile < N) {
		
		if (var1*dawhile > N);					//inutile mais là pour le principe
		else if (var1 * dawhile % var2 == 0);
		else
		total = total + var1 * dawhile;

		if (var2*dawhile > N);
		else
		total = total + var2 * dawhile;

		dawhile++;

	}
	cout << total << endl << endl;

	system("pause");

}

