#pragma once
#include "Case.h"

class Depart : public Case
{
	private : 
		int nom;
	public:
		Depart(string nom);
		void arreterSur();
};
