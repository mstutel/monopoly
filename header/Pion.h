#pragma once
#include "Joueur.h"
class Pion
{
private:
	Joueur joueur;
	Case position;
	string nom;

public:
	//getteurs
	Joueur getJoueur();
	Case getPosition();
	string getNom();

	//setteurs
	void setJoueur(Joueur j);
	void setPosition(Case c);
	void setNom(string n);

	//Actions
	void deplacer();
};

