#include "Terrainbis.h"
using namespace std;

Terrain::Terrain(int nombredemaisons, int loyermaison1, int loyermaison2, int loyermaison3, int loyermaison4, int prixMaison, string Couleur) : Propriete(nom, prixAchat, loyer)
{
	this->Couleur = couleur;
	this->nombredemaisons = nombredemaisons;
	this->loyermaison1 = loyermaison1;
	this->loyermaison2 = loyermaison2;
	this->loyermaison3 = loyermaison3;
	this->loyermaison4 = loyermaison4;
	this->prixMaison = prixMaison;
}

void Terrain::listeloyer()
{
	listeloyer.push_back("loyermaison1");
	listeloyer.push_back("loyermaison2");
	listeloyer.push_back("loyermaison3");
	listeloyer.push_back("loyermaison4");
	listeloyer.push_back("loyerhotel");
}

bool Terrain::checkCouleur(Joueur joueur)
{
  if (Couleur == "Marron")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Marron" && proprietaire == proprietaire) {N += 1}}
    if (N == 2) {return true}
    }
  
  if (Couleur == "Bleu ciel")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Bleu ciel" && proprietaire == proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
  
  if (Couleur == "Rose")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Rose" && proprietaire == proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
    
  if (Couleur == "Orange")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Orange" && proprietaire == proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
    
  if (Couleur == "Rouge")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Rouge" && proprietaire == proprietaire) {N += 1}}
    if (N == 3) {return true}
    }
    
  if (Couleur == "Jaune")
    {N = 0; //Nombre de propriétés jaunes appartenant au joueur
      for terrain in Plateau:
        {if (terrain.Couleur == "Jaune" && proprietaire == proprietaire) {N += 1}}
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

Terrain::acheterMaison(Joueur joueur)
{
  if (checkCouleur(Joueur joueur) == true)
    {
      if (loyer != loyerhotel)
        {
          joueur.debiter(prixMaison)
	  loyer = listeloyer[nombredemaisons + 1]; 
        }
    }
}

void Terrain::arreterSur()
{
}
