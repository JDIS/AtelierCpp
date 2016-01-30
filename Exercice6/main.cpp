#include<iostream>

#include "MicroOnde.h"
#include "Lasagne.h"
#include "Tarte.h"

using namespace std;

void presentation1(Plat p_plat)
{
	cout << "Nom du plat: " << p_plat.nom() << endl;
}

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
	presentation1(*plat1);
	presentation2(plat1);
	presentation3(*plat1);
	cout << "Fait maison? " << plat1->faitMaison() << endl;

	if(monMicroOnde.mettrePlat(plat1))
		plat1 = nullptr;

	monMicroOnde.chaufferPlat(2);

	plat1 = dynamic_cast<Lasagne*>(monMicroOnde.enleverPlat());

	/*************/

	Tarte* plat2 = new Tarte(5, 3, Viande);

	cout << "*********************" << endl;
	presentation1(*plat2);
	presentation2(plat2);
	presentation3(*plat2);
	cout << "Type? " << plat2->type() << endl;

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