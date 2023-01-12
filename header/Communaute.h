#pragma once
#include "Case.h"

class Communaute : public Case
{	
	public:
		Communaute(string nom);
		void arreterSur(Joueur joueur);
};
