#include "Parc.h"

Parc::Parc(string nom) : Case(nom)
{
}

void Parc::arreterSur(Joueur joueur)
{
    this->arretCase(joueur);
}
