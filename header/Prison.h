#pragma once
#include "Case.h"

class Prison : public Case
{	
	private: 
		string nom;
		
	public:
		Prison(string nom);
		void arreterSur();
};
