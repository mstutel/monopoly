#pragma once
#include <string>
#include"Joueur.h"
using namespace std;

class Case
{
	protected:
		string nom;
		Case* suivante;

	public:
		//Constructeurs
		Case();
		Case(string nom);

		//Getters 
		string getNom();
		Case* getSuivante();

		//Setters
		void setNom(string nom);
		void setSuivante(Case c);

		Case* caseSuivante();

		void arretCase(Joueur joueur);
};