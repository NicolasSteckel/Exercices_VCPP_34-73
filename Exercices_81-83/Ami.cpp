#include<stdio.h>
#include<iostream>
#include"Point.h"
#include"Vecteur.h"

using namespace std;

//Exercice 81
void affiche(Point& pt){
    std::cout << "Les cordonnees du point sont : " << pt.X << "," << pt.Y << std::endl;
}

//Exercice 82
void coincide(vecteur3d vecteur1, vecteur3d vecteur2) {
		if (vecteur1.x == vecteur2.x && vecteur1.y == vecteur2.y && vecteur1.z == vecteur2.z) {
			cout << "Les deux vecteurs ont les memes composantes" << endl;
		}

		else {
			cout << "Les deux vecteurs n'ont pas les memes composantes" << endl;
		};

	}
