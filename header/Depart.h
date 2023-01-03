#pragma once
#include "Case.h"

class Depart : public Case
{
	public:
		Depart(string nom);
		void arreterSur(Joueur);
};
