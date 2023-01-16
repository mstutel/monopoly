#pragma once
#include "Plateau.h"
#include "Groupe.h"
#include "vector"
using namespace std;

//Création du plateau LE SEUL ET L'UNIQUE
Plateau lePlateau;

//Création des groupes de couleur
Groupe marron(lePlateau.getCase(1), lePlateau.getCase(3));
Groupe bleuciel(lePlateau.getCase(6), lePlateau.getCase(8), lePlateau.getCase(9));
Groupe rose(lePlateau.getCase(11), lePlateau.getCase(13), lePlateau.getCase(14));
Groupe orange(lePlateau.getCase(16), lePlateau.getCase(18), lePlateau.getCase(19));
Groupe rouge(lePlateau.getCase(21), lePlateau.getCase(23), lePlateau.getCase(24));
Groupe jaune(lePlateau.getCase(26), lePlateau.getCase(27), lePlateau.getCase(29));
Groupe vert(lePlateau.getCase(31), lePlateau.getCase(32), lePlateau.getCase(34));
Groupe bleufonce(lePlateau.getCase(37), lePlateau.getCase(39));

//Groupe de compagnie
Groupe compagnies(lePlateau.getCase(12), lePlateau.getCase(28));

class Jeu
{
  private:
    vector<Joueur*> joueurs_;
    int tourActuel_;
    Joueur* gagnant_;
  
  public:
    Jeu(vector<Joueur*> joueurs);
    pair<int,int> LancerLesDes();
    void TourSuivant();
    void VerifierFin();
    void Commencer();

};
