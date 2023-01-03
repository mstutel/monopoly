#pragma once
#include "Case.h"

class Taxe : public Case
{
	private:
		int cout;

	public:
		Taxe(string nom, int cout);
		void arreterSur(Joueur joueur);
};
