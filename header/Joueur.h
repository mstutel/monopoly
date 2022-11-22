#include <string>
using namespace std;

class Joueur
{
	private:
		string nom;
		int position;
		int solde;

	public:
		//getters
		string getNom()   { return nom;  }
		int getPosition() { return position; }
		int getSolde()    { return solde; }

		//setters
		void setNom(int nom)           { this->nom = nom; }
		void setPosition(int position) { this->position = position; }
		void setSolde(int solde)       { this->solde = solde; }

		//Actions
		void crediter(int credit) { solde += credit; }
		void debiter(int debit)   { solde -= debit; }
		void avancer(int des)     { position += des; }
};
