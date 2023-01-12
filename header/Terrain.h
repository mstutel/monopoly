#pragma once
#include "Propriete.h"
using namespace std;

class Terrain : public Propriete
{
  private:
    int loyerMaison[5];
    int prixMaison;
    int nombreDeMaisons;
    string couleur;

  public:
    //Constructeur, nom de la propriété, son prix d'achat, son loyer, nb de maisons, prix maison, propriétaire, couleur
    Terrain(string nom, int prixAchat, int loyer, int loyermaison1, int loyermaison2, int loyermaison3, int loyermaison4, int loyerhotel, int prixMaison, string couleur);
    
    //Checker si le propriétaire possède toutes les propriétés de la même couleur
    bool checkCouleur(Joueur joueur);
    
    //Prix de la maison en fonction de la case
    void acheterMaison(Joueur joueur);

    void arreterSur(Joueur joueur);
};
