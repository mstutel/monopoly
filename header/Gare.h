#pragma once
#include "Propriete.h"

class Gare : public Propriete
{
	private:
		int nombreDeGares;
	public:
		Gare(string nom, int prixAchat,int loyer);
		void arreterSur(Joueur joueur);
};
