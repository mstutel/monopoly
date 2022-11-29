#include "Case.h"

string Case::getNom()
{
	return nom;
}

Case* Case::getSuivante()
{
	return suivante;
}

void Case::setNom(string nom)
{
	this->nom = nom;
}

void Case::setSuivante(Case c)
{
	suivante = &c;
}

// A FINIR !!!

void Case::arreterSur()
{
}
