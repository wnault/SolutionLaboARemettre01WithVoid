// But : �crire un programme qui prend comme entr�e un nombre de cinq chiffres.
// Il doit afficher les chiffres verticalement.
// Auteur : William Nault
// Date : 2021-09-02


#include<iostream>
void main()
{
	// D�claration des variables

	int nb1;
	//Demander � l'utilisateur d'entrer un nombre entier � 5 chiffres
	
	setlocale(LC_ALL, "");

	std::cout << "Entrer un nombre entier � 5 chiffres:";
	std::cin >> nb1;

	// Regarder si le nombre � 5 chiffres(sinon erreur)

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
		    
		
		// d�couper le nombre ( en le divisant et modulo )et l'afficher verticalement
		
		std::cout << nb1 / 10000 % 10 << "\n";
		std::cout << nb1 / 1000 % 10 << "\n";
		std::cout << nb1 / 100 % 10 << "\n";
		std::cout << nb1 / 10 % 10 << "\n";
		std::cout << nb1 % 10 << "\n";
		}
	}

	// Plan de test
	// �crire les tests ici mais j'ai la flemme


}