#pragma once
#include "Case.h"

class Communaute : public Case
{	private :
		string nom;
	public:
		
		Communaute(string nom);
		void arreterSur();
};

