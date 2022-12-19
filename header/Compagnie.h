#pragma once
#include "Propriete.h"

class Compagnie : public Propriete
{
	public:
		Compagnie(string nom, int prixAchat, int loyer);
		void arreterSur();
};
