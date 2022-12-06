#pragma once
#include "Propriete.h"

class Gare : public Propriete
{
	public:
		//Constructeurs
		Gare(string nom, int loyer, int prixAchat);
		void arreterSur();
};
