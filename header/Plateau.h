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
    		case createCases();
   
	        //lien entre les cases
	        void lierCases();
    
};
