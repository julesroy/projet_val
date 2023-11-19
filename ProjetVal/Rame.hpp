#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Rame
{
public:
	Rame(int x, int y);//constructeur
	Rame();
	~Rame();//destructeur


	//methodes de la class
	void acceleration(int pourcentage);
	void deceleration(int pourcentage);

	//setter
	void set_numero(int nb);
	void set_vitesse(int v);
	void set_position_x(int x);
	void set_position_y(int y);
	void set_passagers(int nb);
	void set_distance_arret_urgence(int dis);
	void set_poids(int p);
	void setRepr();

	//getters
	int get_numero();
	float get_vitesse();
	int get_position_x();
	int get_position_y();
	int get_passagers();
	float get_distance_arret_urgence();
	int get_poids();
	ConvexShape getRepr();

 

	//move des triangle entre entre 2 pos
	void move_toi(int x_start, int y_start, int x_end, int y_end);

private:
	int numero;
	float vitesse;
	int terminus;
	float position_x;
	float position_y;
	int nb_passagers;
	float distance_arret_urgence;
	int poids;
	ConvexShape representation;



};


