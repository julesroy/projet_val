#include "headers/Route.hpp"

using namespace std;
using namespace sf;

Route::Route() {}

Route::Route(int id, Station station1, Station station2, Color color) {
	id_voie = id; //id de la voie pour situer les rames
	// id des stations pour dessiner la voie
	station_depart = station1;
	station_arrivee = station2;
	// position des stations 
	station1_x = station1.getPositionX();
	station1_y = station1.getPositionY();
	station2_x = station2.getPositionX();
	station2_y = station2.getPositionY();
	//d�finition de la longueur de la voie � l'horizontale (longueur) et � la verticale (hauteur)
	longueur = station2_x - station1_x;
	hauteur = station1_y - station2_y;
	couleur = color; // couleur des voies
}

// m�thodes getters
int Route::get_id_voie() {
	return id_voie;
}

int Route::get_longueur() {
	return longueur;
}

int Route::get_hauteur() {
	return hauteur;
}

void Route::setRepr() {// m�thode pour repr�senter la route 
	if (hauteur == 0) { // horizontale
		representation.setSize(Vector2f(longueur, epaisseur));
		representation.setPosition(station1_x, station1_y + 6);
	}
	if (longueur == 0 && station1_y < station2_y) { //verticale descendante
		representation.setSize(Vector2f(hauteur, epaisseur));
		representation.rotate(-90);
		representation.setPosition(station1_x - 10, station1_y);
	}
	if (longueur == 0 && station1_y > station2_y) { //verticale montante
		representation.setSize(Vector2f(hauteur, epaisseur));
		representation.rotate(-90);
		representation.setPosition(station1_x + 6, station1_y);
	}
	representation.setFillColor(couleur); // couleur de la voie
}

void Route::setReprRetour() { // m�thode pour repr�senter la route de retour
	if (hauteur == 0) { // horizontale
		representation.setSize(Vector2f(longueur, epaisseur));
		representation.setPosition(station1_x, station1_y - 10);
	}
	if (longueur == 0 && station1_y < station2_y) { // verticale descendante
		representation.setSize(Vector2f(hauteur, epaisseur));
		representation.rotate(-90);
		representation.setPosition(station1_x + 6, station1_y);
	}
	if (longueur == 0 && station1_y > station2_y) { // verticale montante
		representation.setSize(Vector2f(hauteur, epaisseur));
		representation.rotate(-90);
		representation.setPosition(station1_x - 10, station1_y);
	}
	representation.setFillColor(couleur);// couleur de la voie
}

// m�thode getter pour repr�senter les voies
RectangleShape Route::getRepr() {
	return representation;
}