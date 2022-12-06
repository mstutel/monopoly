#include "Case.h"


Case::Case(string nom)
{
	this->nom = nom;
	suivante = nullptr;
}

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
