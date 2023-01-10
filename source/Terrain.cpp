#include "Terrain.h"
using namespace std;

Terrain::Terrain(string nom, int loyer, int prixAchat, int loyermaison1, int loyermaison2, int loyermaison3, int loyermaison4, int loyerhotel, int prixMaison, string couleur) : Propriete(nom, prixAchat, loyer)
{
	this->couleur = couleur;
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
  string couleurs[8] {"Marron","Bleu ciel","Rose","Orange","Rouge","Jaune","Vert","Bleu foncé"};
  int N = 0; //Nombre de propriétés jaunes appartenant au joueur
  for (int i=0; i<8, i++;){ //parcours des couleurs
    if (couleur == couleurs[i]) //test la couleur du terrain
      for terrain in Plateau: 
      //FAIRE UNE BOUCLE QUI TESTE SI LE joueur EST PROPRIO DE TOUTES LES CASES DE LA COULEUR 
      //(surement avec pointeur car le plateau est pas défini dans cette classe, créer des listes avec les teerrains de chaque couleur)

        {if (terrain.couleur == "Marron" && proprietaire == proprietaire) {N += 1}}
    if (N == 2)
    {return true;}
  }
}

Terrain::acheterMaison(Joueur joueur)
{
  if (checkCouleur(Joueur joueur) == true)
    {
      if (loyer != loyerhotel)
        {
          joueur.debiter(prixMaison);
	  nombredemaisons += 1;
	  loyer = listeloyer[nombredemaisons]; 
        }
    }
}

void Terrain::arreterSur(Joueur joueur)
{
  this->arretCase(joueur);
  if (proprietaire == nullptr) {
		if (joueur.getSolde() >= prixAchat) {
			this->acheter(joueur);
		}
	}
	else {
		joueur.payer(*proprietaire, loyer);
	}
}
