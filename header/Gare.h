#pragma once
#include "Propriete.h"

class Gare : public Propriete
{
	public:
		//Constructeurs
		Gare(string nom, int prixAchat,int loyer);
		void arreterSur();
};
