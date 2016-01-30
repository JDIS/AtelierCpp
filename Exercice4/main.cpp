#include<iostream>

#include "MicroOnde.h"
#include "Plat.h"

using namespace std;

int main()
{
	Plat* plat1 = new Plat("Lasagne", 10, 2);

	MicroOnde monMicroOnde(10);

	cout << "*********************" << endl
		<< "Nom du premier plat: " << plat1->nom() << endl;

	if(monMicroOnde.mettrePlat(plat1))
		plat1 = nullptr;

	monMicroOnde.chaufferPlat(2);

	plat1 = monMicroOnde.enleverPlat();

	/*************/

	Plat* plat2 = new Plat("Tarte", 5, 3);

	cout << "*********************" << endl
		<< "Nom du deuxieme plat: " << plat2->nom() << endl;

	if(monMicroOnde.mettrePlat(plat2))
		plat2 = nullptr;

	monMicroOnde.chaufferPlat(2);

	/*************/

	if (plat1 != nullptr)
	{
		delete plat1;
	}

	if (plat2 != nullptr)
	{
		delete plat2;
	}

	return 0;
}