#pragma once
#include "Propriete.h"

class Compagnie : public Propriete
{
	public:
		//Constructeurs
		Compagnie(string nom, int loyer, int prixAchat);

		void arreterSur();
};
