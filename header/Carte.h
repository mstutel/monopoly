#pragma once
#include <string>
using namespace std

class Carte {

private :
  
  int transaction;
  bool positionGlobale; /* vaut true si le changement de position est "global" (par exemple "Allez à la Rue de la Paix") et false sinon (par exemple "Réculez de 3 cases") */
  int changePostion;
  string description;
  bool isLiberation;
  bool isReparation;
  Carte* suivant;
  
 
public :
  Carte(int transaction,bool positionGlobale, int changePosition,string, Carte* suivant,int isLiberation=false,int isReparation=false);
  void action(Joueur);
  Carte getSuivant();
  void setSuivant(Carte);
  
};
