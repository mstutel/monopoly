#pragma once
#include "Case.h"

class Taxe : public Case
{
	private:
		string nom;
		int cout;

	public:
		Taxe(string nom, int cout);
		void arreterSur();
};

