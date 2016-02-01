#include <iostream>

int outputSum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 0;
    int b = 0;

    // Demander deux nombres a l'utilisateur
    std::cout << "Veuillez entrer un nombre a additionner : \n";
    std::cin >> a;
    std::cout << "Veuillez entrer nombre a additionner au deuxieme : \n";
    std::cin >> b;

    // Appel de fonction
    int sum = outputSum(a, b);

    // Afficher la somme
    std::cout << "La somme des deux nombres est : " << sum;
}
