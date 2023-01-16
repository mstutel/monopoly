#include "Groupe.h"

Groupe::Groupe(Case a, Case b)
{
    listeElements[0] = &a;
    listeElements[1] = &b;
    listeElements[2] = nullptr;
    taille = 2;
}

Groupe::Groupe()
{
    listeElements[0] = nullptr;
    listeElements[1] = nullptr;
    listeElements[2] = nullptr;
    taille = 0;
}

Groupe::Groupe(Case a, Case b, Case c)
{
    listeElements[0] = &a;
    listeElements[1] = &b;
    listeElements[2] = &c;
    taille = 3;
}

int Groupe::getTaille()
{
    return taille;
}

Case* Groupe::getElement(int index)
{
    return listeElements[index];
}
