#include<stdio.h>
#include<iostream>
#include<math.h>
#include"CVecteur.h"
#include "CPoint.h"

int main()
{
	float val1, val2, val3;

	vecteur3d vecteur;
	

	std::cout << "Entrer la coordonne X du point" << std::endl;
	std::cin >> val1;
	std::cout << "Entrer la coordonne Y du point" << std::endl;
	std::cin >> val2;
	std::cout << "Entrer la coordonne Z du point" << std::endl;
	std::cin >> val3;
	vecteur3d vecteur1(val1, val2, val3);
	
	vecteur.affichage();


	//vecteur1.affichage();

	/*69 b.
	vecteur3d vecteur(10, 10, 10);

	vecteur.affichage();
	*/

	//Exercice 70 a.
	std::cout << "Verification par valeur des composantes des vecteurs :" << std::endl;
	vecteur.coincideVal(vecteur1);

	//Exercice 70 b.
	std::cout << "Verification par adresse des composantes des vecteurs :" << std::endl;
	vecteur.coincidePt(&vecteur1);
	
	//Exercice 70 c.
	std::cout << "Verification par reference des composantes des vecteurs :" << std::endl;
	vecteur.coincideRef(vecteur1);

	//Exercice 71
	std::cout << "Exercice 71" << std::endl;

	//a.
	vecteur.normax(vecteur1);

	//b.
	vecteur.normaxAd(&vecteur1);

	//c.
	vecteur.normaxRef(vecteur1);

	//Exercice 72
	std::cout << "Exercice 72" << std::endl;
	vecteur3d vecteur3;

	vecteur3.affichage2();

	std::cout << "Entrer la coordonne X du point" << std::endl;
	std::cin >> val1;
	std::cout << "Entrer la coordonne Y du point" << std::endl;
	std::cin >> val2;
	std::cout << "Entrer la coordonne Z du point" << std::endl;
	std::cin >> val3;

	vecteur3d vecteur4(val1, val2, val3);

	vecteur4.addition(vecteur4);

	vecteur4.scalaire(vecteur4);

	//Exercice 73
	std::cout << "Exercice 73" << std::endl;

	Point pt1(2, 12);

	pt1.affichagePt();

	pt1.~Point();

	pt1.affichagePt();

	return 0;
}