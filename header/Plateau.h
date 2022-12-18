#pragma once
#include <string>
using namespace std;

#include "Case.h"
#include "Chance.h"
#include "Communaute.h"
#include "Compagnie.h"
#include "Depart.h"
#include "Gare.h"
#include "Parc.h"
#include "Prison.h"
#include "Taxe.h"
#include "Terrain.h"

//Include tous les types de cases

class Plateau{
	private:
		Case liste_cases[40];

	public:
		//Construction du plateau
    	Plateau();
};
