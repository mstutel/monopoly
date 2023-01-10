#pragma once
#include "Case.h"

class Taxe : public Case
{
	private:
		int prix;

	public:
		Taxe(string nom, int prix);
		void arreterSur(Joueur joueur);
};
