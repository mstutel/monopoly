#pragma once
#include <string>
using namespace std;

class Case
{
	private:
		string nom;

	public:
		//Constructeurs
		Case();
		Case(string nom);

		//Getters 
		string getNom();

		//Setters
		void setNom(string nom);

};
