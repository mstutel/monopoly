#include "Prison.h"
#include "Jeu.h"

Prison :: Prison(string nom) : Case(nom) {
}

void Prison::arreterSur(Joueur joueur)
{
	this->arretCase(joueur);
	if (nom == "Aller en Prison") {
		joueur.avancer(20);
	}
  //FAIRE LE CAS SI ON EST EN PRISON 
}
