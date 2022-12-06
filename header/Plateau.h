#pragma once
#include <string>
using namespace std;
#include "Case.h"

#ifndef Plateau_H
#define Plateau_H

#include <list>

class Plateau{
	private:
		case Case;

	public:
    		//Constructeur
    		case createCases(string nom, Case c);
   
	        //lien entre les cases
	        void lierCases(Case case1, Case case2);
    
};
