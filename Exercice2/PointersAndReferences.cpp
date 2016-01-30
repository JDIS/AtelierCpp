// my first program in C++
#include <iostream>

void addToIntWithReference(int& val, int toAdd)
{
	// Les références utilisent les mêmes adresses que l'adresse de la variable passé dans la fonction
	// Donc &val == &initValue en d'autres mots adresse val == adresse initValue dans main
	val += toAdd;
}

void addToIntWithPointer(int* val, int toAdd)
{
	// Ici le pointeur val est une nouvelle variable contenant l'adresse de initValue
	// Pour modifier la valeur de cette adresse, il est important de la déréférencer avec le l'opérateur (*) en avant du pointeur.
	*val += toAdd;
}

void addToIntByValue(int val, int toAdd)
{
	// Puisque dans cette fonction val est une nouvelle variable avec une nouvelle adresse
	// Toute modification est inutile puisque val sera deleté à la fin de la fonction.
	val += toAdd;
}

int main()
{
	int initValue;
	std::cout << "Enter the initial value" << std::endl;
	std::cin >> initValue;
	std::cout << "Integer to add" << std::endl;
	int toAdd;
	std::cin >> toAdd;

	addToIntWithReference(initValue, toAdd);
	std::cout << "Addition avec une reference: " << initValue << std::endl;

	addToIntWithPointer(&initValue, toAdd);
	std::cout << "Addition avec un pointeur: " << initValue << std::endl;

	addToIntByValue(initValue, toAdd);
	std::cout << "Addition par copie de valeur: " << initValue << std::endl;

	// Wait input before closing
	std::cin >> initValue;
}