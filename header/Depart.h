#pragma once
#include "Case.h"

class Depart : public Case
{
	private : 
		string nom;
	public:
		Depart(string nom);
		void arreterSur();
};
