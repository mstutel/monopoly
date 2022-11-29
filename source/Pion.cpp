#include"Pion.h"

Joueur Pion::getJoueur()
{
    return joueur;
}

Case Pion::getPosition()
{
    return position;
}

string Pion::getNom()
{
    return nom;
}

void Pion::setJoueur(Joueur j)
{
    joueur = j;
}

void Pion::setPosition(Case c)
{
    position = c;
}

void Pion::setNom(string n)
{
    nom = n;
}

//A FINIR !!!

void Pion::deplacer()
{
}
