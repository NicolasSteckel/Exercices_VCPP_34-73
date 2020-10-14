#include<stdio.h>
#include<iostream>
#include"Point.h"
#include"Vecteur.h"

using namespace std;

int main(){
    int val1, val2;



    //Exercice 81
    Point pt1(8, 3);

    

    affiche(pt1);

    std::cout << "Entrer la coordonne X du point" << std::endl;
    std::cin >> val1;
    std::cout << "Entrer la coordonne Y du point" << std::endl;
    std::cin >> val2;

    Point pt2(val1, val2);


    affiche(pt2);

    //Exercice 82
    std::cout << "-----Exercice 82-----" << std::endl;
    vecteur3d v1(6,8,1);

    vecteur3d v2(6,8,1);
    
    std::cout << "Verification par valeur des composantes des vecteurs :" << std::endl;
    coincide(v1,v2);



    return 0;
}


