#include "Parc.h"

Parc::Parc(string nom) : Case(nom)
{
}

void Parc::arreterSur()
{
    this->arretCase(joueur);
}
