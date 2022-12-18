#pragma once
#include "Case.h"

class Parc : public Case
{
	private:
		string nom;

	public:
		Parc(string nom);
		void arreterSur();
};

