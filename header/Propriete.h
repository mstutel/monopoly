#pragma once
#include "Case.h"

class Propriete : public Case
{
	private:
		int loyer;
		int prixAchat;

	public:
		//Getters
		int getLoyer();
		int getPrixAchat();

		//Setters
		void setLoyer(int l);
		void setPrixAchat(int p);

		//Actions
		void arreterSur();

};

