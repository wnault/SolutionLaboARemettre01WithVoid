// But : Écrire un programme qui lit un entier et qui détermine et affiche
// s'il sagit d'un entier ou pair d'un entier impair.
// Auteur : William Nault
// Date : 2021-09-01

#include<iostream>

void main()
{
	int nb1;

	setlocale(LC_ALL, "");

	// Demmander a l'utilisateur de rentrer un nombre entier

	std::cout << "Entrer un nombre entier :";
	std::cin >> nb1;

	// Déterminer si le nombre est pair ou impair en divisant par 2 et que le reste égal 0

	if (nb1 % 2 == 0)
	{
		std::cout << nb1 << " est un nombre pair" << std::endl;
	}
	else 
	{
		std::cout << nb1 << " est un nombre impair.";
	}

	// Plan de test
	// nb1
	// 509212     509212 est un nombre pair
	// 000000     000000 est un nombre pair
	// 000000001  0000000001 est un nombre impair
	// A          A est erreur : 0 est pair
}