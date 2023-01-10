#include "Gare.h"

Gare::Gare(string nom, int prixAchat, int loyer) : Propriete(nom, prixAchat, loyer)
{
}

void Gare::arreterSur(Joueur joueur)
{
	this->arretCase(joueur);
	if (proprietaire == nullptr) {
		if (joueur.getSolde() >= prixAchat) {
			this->acheter(joueur);
		}
	}
	else {
		joueur.payer(*proprietaire, loyer);
	}
}
