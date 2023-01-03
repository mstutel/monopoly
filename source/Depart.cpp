#include "Depart.h"

Depart :: Depart(string nom) : Case(nom) {
}

void Depart::arreterSur(Joueur joueur)
{
	joueur.crediter(200);
}
