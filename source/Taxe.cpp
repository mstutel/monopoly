#include "Taxe.h"

Taxe::Taxe(string nom, int prix) : Case(nom)
{
	this->prix = prix;
}

void Taxe::arreterSur(Joueur joueur)
{
	this->arretCase(joueur);
	joueur.debiter(prix);
	cout << joueur.getNom() << " verse " << prix << "$ à la Banque."<< endl;
}
