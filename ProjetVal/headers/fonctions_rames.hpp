/**
	* @file fonctions_rames.hpp
	* @brief Header des fonctions associees aux rames
*/
#pragma once
#include "Rame.hpp"
#include <thread>
#include <vector>

void moveRame(Rame& rame, Rame& rame_apres, vector<Station> listeStations, bool beginning, vector<Rame>& tabRame, Text& text); //fonction de deplacement des rames
void updateRameText(Text& text, vector<Rame>& tabRame, Rame rame, int pos_x, int pos_y); //fonction de mise a jour du texte du nombre de passagers dans les rames
bool nextGauche(Station actuelle, Station prochaine); //verifie si la prochaine station est a gauche
bool nextDroite(Station actuelle, Station prochaine); //verifie si la prochaine station est a droite
bool nextHaut(Station actuelle, Station prochaine); //verifie si la prochaine station est en haut
bool nextBas(Station actuelle, Station prochaine); //verifie si la prochaine station est en bas
bool previousGauche(Station previous, Station actuelle); //verifie si la station precedente etait a gauche
bool previousDroite(Station previous, Station actuelle); //verifie si la station precedente etait a droite
bool previousHaut(Station previous, Station actuelle); //verifie si la station precedente etait en haut
bool previousBas(Station previous, Station actuelle); //verifie si la station precedente etait en bas
int arret_urgence_window(RenderWindow& window, Event event, Rame& R1_1, Rame& R1_2, Rame& R1_3, Rame& R1_4, Rame& R1_5, Rame& R1_6, Rame& R2_1, Rame& R2_2, Rame& R2_3, Rame& R2_4, Rame& R2_5, Rame& R2_6); //gestion de l'arret d'urgence au clic sur une rame
void clignotement_rame(Rame& R1_1, Rame& R1_2, Rame& R1_3, Rame& R1_4, Rame& R1_5, Rame& R1_6, Rame& R2_1, Rame& R2_2, Rame& R2_3, Rame& R2_4, Rame& R2_5, Rame& R2_6); //clignotement des rames en cas d'arret d'urgence