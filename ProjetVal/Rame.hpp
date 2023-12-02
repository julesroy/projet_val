#ifndef RAME_H
#define RAME_H

#include "Station.hpp"

class Rame {
private:
	float centre_x;
	float centre_y;
	float taille_cote = 25;
	int numero;
	float vitesse = 10;
	float position_x;
	float position_y;
	int nb_passagers;
	float distance_arret_urgence;
	float poids;
	bool est_Arrete = true;
	bool terminus = false;
	bool retour = false;
	bool hasStarted_ = false;
	bool en_freinage = false;
	float angleRotation = 0.0;
	ConvexShape representation;

public:
	Rame(Station station_depart);//constructeur
	Rame(Station station_depart, int numero);
	Rame();
	~Rame();//destructeur


	//methodes de la class
	void vitesse_plus(int pourcentage);
	void vitesse_moins(int pourcentage);

	//setter
	void set_numero(int nb);
	void set_vitesse(float v);
	void set_position_x(int x);
	void set_position_y(int y);
	void set_passagers(int nb);
	void set_distance_arret_urgence(float dis);
	void set_poids(float p);
	void setRepr();
	void setArrete(bool etat);
	void setTerminus(bool etat);
	void setRetour(bool etat);
	void setStarted(bool etat);
	void setFreinage(bool etat);

	//getters
	int get_numero();
	float get_vitesse();
	int get_position_x();
	int get_position_y();
	int  get_passagers();
	float get_distance_arret_urgence();
	int get_poids();
	bool estArrete();
	ConvexShape getRepr();
	int get_vitesse_int();
	bool getTerminus();
	bool getRetour();
	bool hasStarted();
	bool isFreinage();

	//gestion des déplacements
	void moveDroite();
	void moveGauche();
	void moveHaut();
	void moveBas();
	void moveDiagonalHautDroite();
	void moveDiagonalHautGauche();
	void moveDiagonalBasDroite();
	void moveDiagonalBasGauche();
	void rotate180();
};

#endif RAME_H