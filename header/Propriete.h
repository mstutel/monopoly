#pragma once
#include "Case.h"
#include "Joueur.h"

class Propriete : public Case
{
	protected:
		int loyer;
		int prixAchat;
		Joueur* proprietaire;

	public:
		//Constructeurs
		Propriete(string nom, int prixAchat, int loyer);

		//Getters
		int getLoyer();
		int getPrixAchat();

		//Setters
		void setLoyer(int l);
		void setPrixAchat(int p);

		//Actions
		void acheter(Joueur joueur);
};
