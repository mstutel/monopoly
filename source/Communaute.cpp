#include "Communaute.h"

Communaute :: Communaute(string nom) : Case(nom) {
}

void Communaute::arreterSur(Joueur joueur)
{
	this->arretCase(joueur);
}