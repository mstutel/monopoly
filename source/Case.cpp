#include "Case.h"

Case::Case()
{
	nom = "";
	suivante = nullptr;
}

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

Case* Case::caseSuivante()
{
	return suivante;
}

void Case::arretCase(Joueur joueur)
{
	cout << joueur.getNom() << " s'arrête sur la case " << this->getNom() << endl;
}