#pragma once

#include<stdio.h>
#include<iostream>

using namespace std;

class Point{
private:
    int X, Y;

    int abs{};
    int ord{};

    static int comptP;

public:
    Point(int abs = 0, int ord = 0);

    //81
    friend void affiche(Point& pt);


};