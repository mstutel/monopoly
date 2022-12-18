#include "Terrain.h"

Terrain::Terrain(string nom, int prixAchat, int loyer, int maison1, int maison2, int maison3, int maison4, int hotel, int prixMaison) : Propriete(nom,prixAchat,loyer)
{
	this->maison1 = maison1;
	this->maison2 = maison2;
	this->maison3 = maison3;
	this->maison4 = maison4;
	this->hotel = hotel;
	this->prixMaison = prixMaison;
}

void Terrain::arreterSur()
{
}
