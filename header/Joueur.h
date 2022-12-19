#pragma once
#include <string>
using namespace std;

class Joueur
{
	private:
		string nom;
		Case position;
		int solde;

	public:
		//getters
		string getNom();
		int getSolde();

		//setters
		void setNom(int nom);
		void setSolde(int solde);

		//Actions
		void crediter(int credit) { solde += credit; }
		void debiter(int debit)   { solde -= debit; }
		void jouer();
		void operation();

};
