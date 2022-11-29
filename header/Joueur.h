#pragma once
#include "Pion.h"
#include <string>
using namespace std;

class Joueur
{
	private:
		string nom;
		Pion pion;
		int solde;

	public:
		//getters
		string getNom();
		Pion getPion();
		int getSolde();

		//setters
		void setNom(int nom);
		void setPion(Pion pion);
		void setSolde(int solde);

		//Actions
		void crediter(int credit) { solde += credit; }
		void debiter(int debit)   { solde -= debit; }
		void jouer();
		void operation();

};
