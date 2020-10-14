#pragma once

class vecteur3d {
private:
	float x, y, z;

public:

	//Constructeur
	

	vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0);

	friend void coincide(vecteur3d vecteur1, vecteur3d vecteur2);

	
};