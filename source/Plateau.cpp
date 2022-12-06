#pragma once
#include <string>
using namespace std;
#include "Case.h"
#include "Plateau.h"

#include <list>

Case Plateau::createCases(string nom, Case c){
  //on crée la case en lui donnant un nom et un pointeur d'adresse c
  Case.Nom = nom;
  Case.suivante = &c;
}

void Plateau::lierCases(Case case1, Case case2)
{
  //le pointeur de case1 va pointer sur case 2
	case1.suivante = &case2.suivante;
}
