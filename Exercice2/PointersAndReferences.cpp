// my first program in C++
#include <iostream>

void addToIntWithReference(int& val, int toAdd)
{
	// Les r�f�rences utilisent les m�mes adresses que l'adresse de la variable pass� dans la fonction
	// Donc &val == &initValue en d'autres mots adresse val == adresse initValue dans main
	val += toAdd;
}

void addToIntWithPointer(int* val, int toAdd)
{
	// Ici le pointeur val est une nouvelle variable contenant l'adresse de initValue
	// Pour modifier la valeur de cette adresse, il est important de la d�r�f�rencer avec le l'op�rateur (*) en avant du pointeur.
	*val += toAdd;
}

void addToIntByValue(int val, int toAdd)
{
	// Puisque dans cette fonction val est une nouvelle variable avec une nouvelle adresse
	// Toute modification est inutile puisque val sera delet� � la fin de la fonction.
	val += toAdd;
}

struct Addition {
	int* initValue;
	int toAdd;
};

void addAdditionStruct(Addition* operation)
{
	// L'op�ration fl�che (->) est utilis� pour acc�der � un membre d'une struct ou une classe lorsque celui-ci est un pointer
	// En d'autre mot, operation->initValue == (*operation).initValue
	// Dans ce cas-ci, puisque initValue dans Addition est un pointer il faut �galement de d�f�rencer avant de l'additionner
	// *operation->initValue == *(operation->initValue)
	*operation->initValue += operation->toAdd;
}

int main()
{
	int initValue;
	std::cout << "Enter the initial value" << std::endl;
	std::cin >> initValue;
	std::cout << "Integer to add" << std::endl;
	int toAdd;
	std::cin >> toAdd;

	Addition addition;
	addition.toAdd = toAdd;
	addition.initValue = &initValue;

	addToIntWithReference(initValue, toAdd);
	std::cout << "Addition avec une reference: " << initValue << std::endl;

	addToIntWithPointer(&initValue, toAdd);
	std::cout << "Addition avec un pointeur: " << initValue << std::endl;

	addToIntByValue(initValue, toAdd);
	std::cout << "Addition par copie de valeur: " << initValue << std::endl;

	addAdditionStruct(&addition);
	std::cout << "Addition par la struct: " << initValue << std::endl;

	// Wait input before closing
	std::cin >> initValue;
}