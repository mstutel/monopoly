#include "Propriete.h"
#include <string>
using namespace std;


Propriete::Propriete(string nom, int prixAchat, int loyer) : Case(nom)
{
    this->prixAchat = prixAchat;
    this->loyer = loyer;
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
