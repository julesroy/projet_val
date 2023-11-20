#include <iostream>
#include <SFML/Graphics.hpp>
#include "Rame.hpp"
#include <thread>


using namespace std;
using namespace sf;


//constructeur
Rame::Rame() : representation(3)
{
	terminus = 0;
	numero = 0;
	position_x = 0;
	position_y = 0;
	nb_passagers = 0;
	vitesse = 0.0;
	distance_arret_urgence = 3.4;//� voir 
	poids = 0;

}

//methodes de la classe
void Rame::acceleration(int pourcentage) {
	vitesse += vitesse * (pourcentage / 100);
}


void Rame::deceleration(int pourcentage) {
	vitesse -= vitesse * (pourcentage / 100);
}


//les setters
void Rame::set_distance_arret_urgence(int dis) {
	distance_arret_urgence = dis;
}

void Rame::set_numero(int nb) {
	numero = nb;
}

void Rame::set_passagers(int nb) {
	nb_passagers = nb;
}


void Rame::set_position_x(int x) {
	position_x = x;
}

void Rame::set_position_y(int y) {
	position_y = y;
}

void Rame::set_vitesse(int v) {
	vitesse = v;
}

void Rame::set_poids(int p) {
	poids = p;
}

void Rame::setRepr() {
	float pos_y = 223;
	float pos_x = 235;

	representation.setPoint(0, Vector2f(pos_y, 210));
	representation.setPoint(1, Vector2f(pos_y, 230));
	representation.setPoint(2, Vector2f(pos_x, 220));
	representation.setFillColor(Color::Blue);
}



//les getters 
float Rame::get_vitesse() {
	return vitesse;
}
float Rame::get_position_x() {
	return position_x;
}
float Rame::get_position_y(){
	return position_y;
}
int Rame::get_passagers() {
	return nb_passagers;
}
float Rame::get_distance_arret_urgence() {
	return distance_arret_urgence;
}

int Rame::get_poids() {
	return poids;
}

int Rame::get_numero() {
	return numero;
}

ConvexShape Rame::getRepr() {
	return representation;
}

//les moves 
void Rame::moveDroite() {
	representation.move(1, 0);
	setRepr();
}

void Rame::moveGauche() {
	representation.move(-1, 0);
	setRepr();
}

void Rame::moveHaut() {
	representation.move(0, -1);
	setRepr();
}

void Rame::moveBas() {
	representation.move(0, 1);
	setRepr();
}

void Rame::moveDiagonalHautDroite() {
	representation.move(1, -1);
	setRepr();
}

void Rame::moveDiagonalHautGauche() {
	representation.move(-1, -1);
	setRepr();
}

void Rame::moveDiagonalBasDroite() {
	representation.move(1, 1);
	setRepr();
}

void Rame::moveDiagonalBasGauche() {
	representation.move(-1, 1);
	setRepr();
}

//destructeur
Rame::~Rame()
{

}