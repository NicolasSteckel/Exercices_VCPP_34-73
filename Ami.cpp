#include<stdio.h>
#include<iostream>
#include"Point.h"

using namespace std;

//Exercice 81
void affiche(Point& pt){
    std::cout << "Les cordonnees du point sont : " << pt.X << "," << pt.Y << std::endl;
}