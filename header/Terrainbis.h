#pragma once
#include "Propriete.h"
using namespace std;

class Terrain : public Propriete
{
  private:
    int nombredemaisons;
    int prixMaison;
    string Proprietaire; 
    string Couleur


  public:
    //Constructeur, nom de la propriété, son prix d'achat, son loyer, nb de maisons, prix maison, propriétaire, couleur
    Terrain(string nom, int prixAchat, int loyer, int nombredemaisons, int prixMaison, string Proprietaire, string Couleur);
    
    void arreterSur();
    
    //Acheter terrain
    void acheterTerrain(string Proprietaire, int prixAchat);
    
    //Checker si le propriétaire possède toutes les propriétés de la même couleur
    bool checkCouleur(string Proprietaire, string Couleur);
    
    //Prix de la maison en fonction de la case
    void acheterMaison(string Proprietaire, string Couleur, int nombredemaisons, int prixMaison);
};
