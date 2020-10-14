#include<stdio.h>
#include<iostream>
#include"Point.h"

using namespace std;

int main(){
    int x, y;

    //Exercice 81
    Point pt1(8, 3);

    affiche(pt1);

    std::cout << "Entrer la coordonne X du point" << std::endl;
    std::cin >> x;
    std::cout << "Entrer la coordonne Y du point" << std::endl;
    std::cin >> y;

    Point pt2(x, y);

    affiche(pt2);

    return 0;
}


