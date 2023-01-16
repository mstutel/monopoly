#include "Joueur.h"

string Joueur::getNom()
{
    return nom;
}

int Joueur::getSolde()
{
    return solde;
}

Case* Joueur::getPosition()
{
    return position;
    }

void Joueur::setNom(string nom)
{
    this->nom = nom;
}

void Joueur::setSolde(int solde)
{
    this->solde = solde;
}

void Joueur::setPosition(Case* position)
{
    this->position = position;
}

void Joueur::avancer(int n)
{
    for (int i = 0; i < n; i++) {
        position = position->caseSuivante();
        //if position = case départ
        // crediter 200
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
 
