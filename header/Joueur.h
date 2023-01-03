#pragma once
#include <string>
#include "Case.h"
#include "Plateau.h"
using namespace std;

class Joueur
{
	private:
		string nom;

	protected:
		Case* position;
		int solde;
		//int nombreGare;
		//int nombreCompagnie;

	public:
		//getters
		string getNom();
		int getSolde();

		//setters
		void setNom(string nom);
		void setSolde(int solde);
		void setPosition(Case position);

		//Actions
		void crediter(int credit) { solde += credit; }
		void debiter(int debit)   { solde -= debit; }
		void avancer(int n);
		void jouer();
		void payer(Joueur joueur, int cout);

};
