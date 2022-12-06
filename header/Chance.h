#pragma once
#include "Case.h"

class Chance : public Case
{
	private:
		string nom;
	public:
		
		Chance(string nom);
		void arreterSur();
};

