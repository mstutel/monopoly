#pragma once
#include "Propriete.h"

class Gare : public Propriete
{
	public:
		Gare(string nom, int prixAchat,int loyer);
		void arreterSur();
};
