#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int petit(1), moyen(2), grand(3), somme(2);

	while (grand < 4'000'000)
	{
		if (grand % 2 == 0)
			somme = somme + grand;
		else;

		petit = moyen;
		moyen = grand;
		grand = petit + moyen;

	}
	cout << somme << endl << endl;
	system("pause");

}

