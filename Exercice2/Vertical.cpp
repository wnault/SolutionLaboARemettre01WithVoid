// But : Écrire un programme qui prend comme entrée un nombre de cinq chiffres.
// Il doit afficher les chiffres verticalement.
// Auteur : William Nault
// Date : 2021-09-02


#include<iostream>
void main()
{
	// Déclaration des variables

	int nb1;
	//Demander à l'utilisateur d'entrer un nombre entier à 5 chiffres
	
	setlocale(LC_ALL, "");

	std::cout << "Entrer un nombre entier à 5 chiffres:";
	std::cin >> nb1;

	// Regarder si le nombre à 5 chiffres(sinon erreur)

	if (nb1 <= 9999)
	{
		std::cout << "Erreur:" <<nb1 << " n'a pas 5 chiffres ";
		
		
	}
	else
	{
		if (nb1 > 99999)
		{
			std::cout << "Erreur" << nb1 << " n'a pas 5 chiffres ";
		}
		else
		{
		    
		
		// découper le nombre ( en le divisant et modulo )et l'afficher verticalement
		
		std::cout << nb1 / 10000 % 10 << "\n";
		std::cout << nb1 / 1000 % 10 << "\n";
		std::cout << nb1 / 100 % 10 << "\n";
		std::cout << nb1 / 10 % 10 << "\n";
		std::cout << nb1 % 10 << "\n";
		}
	}

	// Plan de test
	// écrire les tests ici mais j'ai la flemme


}