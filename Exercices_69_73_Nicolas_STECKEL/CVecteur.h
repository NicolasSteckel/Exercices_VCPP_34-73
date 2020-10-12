#pragma once

class vecteur3d
{
private:
	float x, y, z;

public:

	//Constructeur
	vecteur3d();

	//69.a
	vecteur3d(float flt_x, float flt_y, float flt_z);

	//69 b.
	//vecteur3d(float x = 5.0, float y = 5.0, float z = 5.0);

	//69 c.
	//vecteur3d(const float x = 0.0, float y = 0.0, float z = 0.0);

	//affichage
	void affichage();

	//comparaison des composantes (70 a.)
	void coincideVal(vecteur3d vecteur1) const;

	//Exercice 70 b.
	void coincidePt(vecteur3d* vecteur1);

	//Exercice 70 C.
	void coincideRef(vecteur3d &vecteur1);

	//Exercice 71 a.
	vecteur3d* normax(vecteur3d vecteur1);

	//Exercice 71 b.
	vecteur3d* normaxAd(vecteur3d* vecteur1);

	//Exercice 71 c.
	vecteur3d* normaxRef(vecteur3d& vecteur1);

	//Exercice 72
	//vecteur3d(float x = 0.0f, float y = 0.0f, float z = 0.0f);

	//Exercice 72 partie 2
	void affichage2();

	//Exercice 72 partie 3
	void addition(vecteur3d vecteur2);

	//Exercice 72 partie 4
	void scalaire(vecteur3d vecteur2);


	//Get
	float getX();
	float getY();
	float getZ();

	//Set
	void set_fltX(float flt_x);
	void set_fltY(float flt_y);
	void set_fltZ(float flt_z);


};