#include<stdio.h>
#include<iostream>
#include<string>
#include"CPoint.h"


int Point::compteurP = 0;

//73
Point::Point(float val_x, float val_y){
	this->X = val_x;
	this->Y = val_y;

	compteurP++;
}

Point::~Point(){
	compteurP--;
}

void Point::affichagePt(){
	std::cout << "Il y a " << compteurP << "objets 'Point'" << std::endl;
}

//Assesseurs
float Point::getX()
{
	return this->X;
}

float Point::getY()
{
	return this->Y;
}

//Mutateurs
void Point::setX(float X)
{
	this->X = X;
}

void Point::setY(float Y)
{
	this->Y = Y;
}