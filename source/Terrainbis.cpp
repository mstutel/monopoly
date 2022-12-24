#include "Terrainbis.h"
using namespace std;

Terrain::Terrain(String nom, int prixAchat, int loyer, int nombredemaisons, int prixMaison) : Propriete(nom,prixAchat,loyer)
{
	this->nombredemaisons = nombredemaisons;
	this->couleur = couleur;
  	this->Proprietaire = NULL;
	this->prixMaison = prixMaison;
}

Terrain::acheterTerrain(string Proprietaire, int prixAchat)
{
  if (Terrain.Proprietaire != NULL){
    this->Proprietaire = Proprietaire;
    this->solde = solde - prixAchat; //debiter(prixAchat)? On peut choper le solde grâce à l'héritage?
    }
  else {
    cout << "Ce terrain est déjà occupé par :" << Proprietaire << endl;
    }
}

bool Terrain::checkCouleur(string Proprietaire, string Couleur)
{
  if (Couleur == "Marron")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Marron" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 2) {return true}
    }
  
  if (Couleur == "Bleu ciel")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Bleu ciel" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
  
  if (Couleur == "Rose")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Rose" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
    
  if (Couleur == "Orange")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Orange" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
    
  if (Couleur == "Rouge")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Rouge" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
    
  if (Couleur == "Jaune")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Jaune" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
    
  if (Couleur == "Vert")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Vert" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
  
  if (Couleur == "Bleu foncé")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Bleu foncé" && terrain.Proprietaire == Proprietaire) {N += 1}}
    if (N == 2) {return true}
    }
}

Terrain::acheterMaison(string Proprietaire, string Couleur, int nombredemaisons, int prixMaison)
{
  if (checkCouleur(string Proprietaire, string Couleur) == true)
    {
      if (Terrain.nombredemaisons < 5)
        {
          Terrain.nombredemaisons += 1; //Il faut adapter le loyer
          this->solde = solde - prixMaison; //debiter(prixMaison)? 
        }
    }
}

void Terrain::arreterSur()
{
}
