#include "Propriete.h"
#include <string>
using namespace std;


Propriete::Propriete(string nom, int loyer, int prixAchat) : Case(nom)
{
    this->loyer = loyer;
    this->prixAchat = prixAchat;
}

int Propriete::getLoyer()
{
    return loyer;
}

int Propriete::getPrixAchat()
{
    return prixAchat;
}

void Propriete::setLoyer(int l)
{
    loyer = l;
}

void Propriete::setPrixAchat(int p)
{
    prixAchat = p;
}

// A FINIR !!!

void Propriete::arreterSur()
{
}
