#include<iostream>

#include "MicroOnde.h"
#include "Lasagne.h"
#include "Tarte.h"

using namespace std;

void presentation2(Plat *p_plat)
{
	cout << "Nom du plat: " << p_plat->nom() << endl;
}

void presentation3(Plat &p_plat)
{
	cout << "Nom du plat: " << p_plat.nom() << endl;
}

int main()
{
	Lasagne* plat1 = new Lasagne(10, 2, true);

	MicroOnde monMicroOnde(10);

	cout << "*********************" << endl;
	presentation2(plat1);
	presentation3(*plat1);
	cout << "Fait maison? " << plat1->faitMaison() << endl;

	if(monMicroOnde.mettrePlat(plat1))
		plat1 = NULL;

	monMicroOnde.chaufferPlat(2);

	plat1 = static_cast<Lasagne*>(monMicroOnde.enleverPlat());

	/*************/

	Tarte* plat2 = new Tarte(5, 3, Viande);

	cout << "*********************" << endl;
	presentation2(plat2);
	presentation3(*plat2);
	cout << "Type? " << plat2->type() << endl;

	if(monMicroOnde.mettrePlat(plat2))
		plat2 = NULL;

	monMicroOnde.chaufferPlat(2);

	/*************/

	delete plat1;
	delete plat2;

	return 0;
}
