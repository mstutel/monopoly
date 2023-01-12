#include "Terrain.h"
using namespace std;

Terrain::Terrain(string nom, int loyer, int prixAchat, int loyermaison1, int loyermaison2, int loyermaison3, int loyermaison4, int loyerhotel, int prixMaison, string couleur) : Propriete(nom, prixAchat, loyer)
{
  loyerMaison[0] = loyermaison1;
  loyerMaison[1] = loyermaison2;
  loyerMaison[2] = loyermaison3; 
  loyerMaison[3] = loyermaison4; 
  loyerMaison[4] = loyerhotel;
  this->prixMaison = prixMaison;
  nombreDeMaisons = 0;
  this->couleur = couleur;
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
  if (checkCouleur(Joueur joueur) == true && nombreDeMaisons != 5){
    //Faire une boucle if pour tester que les autres terrains n'ont pas moins de maisons sinon le joueur peut pas acheter de maison
    nombreDeMaisons++;
    loyer = loyerMaison[nombreDeMaisons]
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
