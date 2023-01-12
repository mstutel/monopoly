#pragma once
#include "Case.h"

class Communaute : public Case
{	
	private:
		Communaute(string nom);
	public:
		void arreterSur(Joueur joueur);
};
