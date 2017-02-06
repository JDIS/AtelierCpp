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
		plat1 = NULL;

	monMicroOnde.chaufferPlat(2);

	plat1 = monMicroOnde.enleverPlat();

	/*************/

	Plat* plat2 = new Plat("Tarte", 5, 3);

	cout << "*********************" << endl
		<< "Nom du deuxieme plat: " << plat2->nom() << endl;

	if(monMicroOnde.mettrePlat(plat2))
		plat2 = NULL;

	monMicroOnde.chaufferPlat(2);

	/*************/

	delete plat1;
	delete plat2;

	return 0;
}
