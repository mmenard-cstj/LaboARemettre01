//but rendre un nombre a 5 chiffre en vertical
//auteur  matthew menard 
//date 2020-09-12


#include <iostream> // biblio cin/cout
int main()
{
	setlocale(LC_ALL, ""); //intégration des accents
	// variables:
	int nombre1;
	
	
	//demande d'entrer un nombre a 5 chiffre
		std::cout << "veuillez entrer un nombre a 5 chiffre";
		
		std::cin >> nombre1; //l'entrée du nombre


	if (nombre1 <= 9999  )// validation des 5 chiffres
	{
		std::cout << "le nombre le contient pas 5 chiffre";// réponse du programme si les moins de 5 chiffres son entrer
	}
	else //réponse du programme si 5 chiffre son entrer + teste de mise en verticale
	{
		
		
		std::cout << nombre1; 
		// std::cout << nombre1[5];       [chiffre] métode essayer pour sortir une reponse vertical 
	

	}
	
}

/*
plan teste

entré           résultat voulu

259             ne contien pas 5 chiffres

 12345             1 
                   2 
				   3 
				   4 
				   5
*/