#include<stdio.h>
#include"CVecteur.h"
#include<iostream>
#include<math.h>

using namespace std;

vecteur3d::vecteur3d(){
	this->x = 5;
	this->y = 2;
	this->z = 8;
}

vecteur3d::vecteur3d(float flt_x, float flt_y, float flt_z){
	this->x = flt_x;
	this->y = flt_y;
	this->z = flt_z;
}
/*
vecteur3d::vecteur3d(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
*/

/*69 c.

vecteur3d::vecteur3d(float x, float y, float z) : x(x), y(y), z(z)
*/


void vecteur3d::affichage(){
	cout << "Les coordonnees X du point" << endl;
	cout << getX() << endl;
	cout << "Les coordonnees Y du point" << endl;
	cout << getY() << endl;
	cout << "Les coordonnees Z du point" << endl;
	cout << getZ() << endl;
}

//Exercice 70 a.
void vecteur3d::coincideVal(vecteur3d vecteur1) const{
	if (vecteur1.x == x && vecteur1.y == y && vecteur1.z == z) {
		cout << "Les deux vecteurs ont les memes composantes" << endl;
	}

	else{
		cout << "Les deux vecteurs n'ont pas les memes composantes" << endl;
	};

}


//Ecercice 70 b.
void vecteur3d::coincidePt(vecteur3d* vecteur1) {
	if (this->x == vecteur1->getX() && this->y == vecteur1->getY() && this->z == vecteur1->getZ()) {
		cout << "Les deux vecteurs ont les memes composantes" << endl;
	}else {
		cout << "Les deux vecteurs n'ont pas les memes composantes" << endl;


	};
}


//Ecercice 70 c.
void vecteur3d::coincideRef(vecteur3d &vecteur1)
{
	if (this->x == vecteur1.getX() && this->y == vecteur1.getY() && this->z == vecteur1.getZ()) {
		cout << "Les deux vecteurs ont les memes composantes" << endl;
	}
	else {
		cout << "Les deux vecteurs n'ont pas les memes composantes" << endl;
	};
	
}


//Get
float vecteur3d::getX(){
	return this->x;
}
float vecteur3d::getY(){
	return this->y;
}
float vecteur3d::getZ(){
	return this->z;
}

//Set
void vecteur3d::set_fltX(float x){
	this->x;
}
void vecteur3d::set_fltY(float y){
	this->y;
}

void vecteur3d::set_fltZ(float z){
	this->z;
}


//Exercice 71 
//Normax
//a.
vecteur3d* vecteur3d::normax(vecteur3d vecteur1)
{
	float val;
	float val2;

	val = sqrt((this->x * x) + (this->y * y) + (this->z * z));
	val2 = sqrt((vecteur1.getX() * vecteur1.getX()) + (vecteur1.getY() * vecteur1.getY()) + (vecteur1.getZ() * vecteur1.getZ()));

	if (val < val2)
	{
		cout << "Le vecteur comportant la plus haute norme est : " << (vecteur1.getX()) << "," << (vecteur1.getY()) << "," << (vecteur1.getZ()) << endl;
		return &vecteur1;
	}
	else
	{
		cout << "Le vecteur comportant la norme la plus haute est : " << this->x << "," << this->y << "," << this->z << endl;
		return this;
	}
}

//Exercice b.
vecteur3d* vecteur3d::normaxAd(vecteur3d* vecteur1)
{
	float val;
	float val2;

	val = sqrt((this->x * x) + (this->y * y) + (this->z * z));
	val2 = sqrt((vecteur1->getX() * vecteur1->getX()) + (vecteur1->getY() * vecteur1->getY()) + (vecteur1->getZ() * vecteur1->getZ()));

	if (val < val2)
	{
		cout << "Le vecteur comportant la plus haute norme est : " << (vecteur1->getX()) << "," << (vecteur1->getY()) << "," << (vecteur1->getZ()) << endl;
		return vecteur1;
	}
	else
	{
		cout << "Le vecteur comportant la plus haute norme est : " << this->x << "," << this->y << "," << this->z << endl;
		return this;
	}
}

//Exercice c.
vecteur3d* vecteur3d::normaxRef(vecteur3d& vecteur1)
{
	float valeur;
	float valeur2;

	valeur = sqrt((this->x * x) + (this->y * y) + (this->z * z));
	valeur2 = sqrt((vecteur1.getX() * vecteur1.getX()) + (vecteur1.getY() * vecteur1.getY()) + (vecteur1.getZ() * vecteur1.getZ()));

	if (valeur < valeur2)
	{
		cout << "Le vecteur avec la norme la plus haute est : " << (vecteur1.getX()) << "," << (vecteur1.getY()) << "," << (vecteur1.getZ()) << endl;
		return &vecteur1;
	}
	else
	{
		cout << "Le vecteur avec la norme la plus haute est : " << this->x << "," << this->y << "," << this->z << endl;
		return this;
	}
}

//Exercice 72

/*vecteur3d::vecteur3d(){
	this->x = 0;
	this->y = 0;
	this->z = 0;
}
vecteur3d::vecteur3d(float x, float y, float z) : x(x), y(y), z(z)*/

//Exercice 72 partie 2
void vecteur3d::affichage2()
{
	cout << "Les coordonnees du point sont : " << "<" << getX() << "," << getY() << "," << getZ() << ">" << endl;
}

//Exercice 72 partie 3
void vecteur3d::addition(vecteur3d vecteur2)
{
	float x2, y2, z2;

	x2 = this->x + vecteur2.getX();
	y2 = this->y + vecteur2.getY();
	z2 = this->z + vecteur2.getZ();

	vecteur3d vecteur4(x2, y2, z2);

	vecteur4.affichage2();
}

//Exercice partie 4
void vecteur3d::scalaire(vecteur3d vecteur2)
{
	float x2, y2, z2, p_scal;

	x2 = this->x * vecteur2.getX();
	y2 = this->y * vecteur2.getY();
	z2 = this->z * vecteur2.getZ();

	p_scal = x2 + y2 + z2;

	std::cout << "Le produit scalaire des deux vecteurs est de : " << p_scal << std::endl;
}