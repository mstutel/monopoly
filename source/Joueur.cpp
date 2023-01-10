#include "Joueur.h"

string Joueur::getNom()
{
    return nom;
}

int Joueur::getSolde()
{
    return solde;
}

void Joueur::setNom(string nom)
{
    this->nom = nom;
}

void Joueur::setSolde(int solde)
{
    this->solde = solde;
}

void Joueur::setPosition(Case position)
{

}

//A FINIR !!!

void Joueur::avancer(int n)
{
    for (int i = 0; i < n; i++) {
        position = position->caseSuivante();
    }
}

void Joueur::jouer()
{
    
}

void Joueur::payer(Joueur receveur, int montant)
{
    this->debiter(montant);
    receveur.crediter(montant);
    cout << nom << " donne " << montant << "$ à " << receveur.getNom() << endl;
}
 