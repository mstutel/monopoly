#include "Taxe.h"

Taxe::Taxe(string nom, int cout) : Case(nom)
{
	this->cout = cout;
}

void Taxe::arreterSur(Joueur joueur)
{
	this->arretCase(joueur);
	joueur.debiter(cout);
	
}
