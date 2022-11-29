#include "Joueur.h"

string Joueur::getNom()
{
    return nom;
}

Pion Joueur::getPion()
{
    return pion;
}

int Joueur::getSolde()
{
    return solde;
}

void Joueur::setNom(int nom)
{
    this->nom = nom;
}

void Joueur::setPion(Pion pion)
{
    this->pion = pion;
}

void Joueur::setSolde(int solde)
{
    this->solde = solde;
}

//A FINIR !!!

void Joueur::jouer()
{
}

void Joueur::operation()
{
}
