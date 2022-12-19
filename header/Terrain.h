#pragma once
#include "Propriete.h"

class Terrain : public Propriete
{
	private:
		int maison1;
		int maison2;
		int maison3;
		int maison4;
		int hotel;
		int prixMaison;
		
	public:
		Terrain(string nom, int prixAchat, int loyer, int maison1, int maison2, int maison3, int maison4, int hotel, int prixMaison);
		void arreterSur();
};
