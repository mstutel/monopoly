#include "Case.h"
#include <iostream>
using namespace std;

Case::Case(string nom, int index)
{
    this->Nom = nom;
    this->Index = index;
}

string Case::GetNom()
{
    return rdv;
}

NoeudRDV *NoeudRDV::GetSuivant()
{
    return noeud;
}

void NoeudRDV::SetRDV(RDV index)
{
    rdv = index;
}

void NoeudRDV : SetSuivant(NoeudRDV noeud)
{
    suivant = &noeud;
}
