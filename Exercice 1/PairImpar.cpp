//but:Déterminer si le chiffre entré est pair ou impair
//auteur:Matthew Menard
//date:2020-09-11


//biblio cout/cin
#include <iostream>

void main()
{
	setlocale(LC_ALL, ""); // convertie les accents à windows

	//déclaration de variables
	int nombre1;

	//invite à entrer un nombre entier
	std::cout << "veuillez entrer un nombre entier:";
	// le prog va lire le nombre tapé au clavier et le stcker dans la ram
	std::cin >> nombre1;


	//verifie si le nombre est pair ou impair
	if (nombre1 % 2 == 0)
	{  //Le programme envoie pair si le nombre est pair
		std::cout << nombre1 << " est pair";
	}

	else
	{       //Le programme envoie impair si le nombre est impair
		std::cout << nombre1 << " est impair";

	}


}
/*plan test

nombre    résultat attendu
5           nombre impair

12            nombre pair

17           nombre impair

*/