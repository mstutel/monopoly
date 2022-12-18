#pragma once
#include "Propriete.h"

class Compagnie : public Propriete
{
	public:
		//Constructeurs
		Compagnie(string nom, int prixAchat, int loyer);

		void arreterSur();
};
