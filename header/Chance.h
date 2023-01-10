#pragma once
#include "Case.h"

class Chance : public Case
{
	public:	
		Chance(string nom);
		void arreterSur(Joueur joueur);
};
