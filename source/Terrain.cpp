#include "Terrain.h"
#include "Joueur.h"
using namespace std;

Terrain::Terrain(string nom, int loyer, int prixAchat, int loyermaison1, int loyermaison2, int loyermaison3, int loyermaison4, int loyerhotel, int prixMaison) : Propriete(nom, prixAchat, loyer)
{
  loyerMaison[0] = loyermaison1;
  loyerMaison[1] = loyermaison2;
  loyerMaison[2] = loyermaison3; 
  loyerMaison[3] = loyermaison4; 
  loyerMaison[4] = loyerhotel;
  this->prixMaison = prixMaison;
  nombreDeMaisons = 0;
}
bool Terrain::checkCouleur(Joueur joueur) 
{
  for (int i=0; i < groupe.getTaille(); i++){
    if (groupe.getElement(i)->getProprietaire() == &joueur){ //Erreur à cette ligne, pour cela modifier le plateau
      return false;
    }
  }
  return true;
}

bool Terrain::checkMaison()
{
  for (int i=0; i < groupe.getTaille(); i++){
    if (groupe.getElement(i)->getNombreDeMaisons() < this->getNombreDeMaisons()){ //Same que à la ligne 19
      return false;
    }
  }
  return true;
}

void Terrain::acheterMaison(Joueur joueur)
{
  if (this->checkCouleur(joueur) && this->checkMaison() && nombreDeMaisons != 5){
    nombreDeMaisons++;
    loyer = loyerMaison[nombreDeMaisons];
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

Joueur *Terrain::getProprietaire()
{
  return proprietaire;
}

int Terrain::getNombreDeMaisons()
{
  return nombreDeMaisons;
}
