#include "Carte.h"

class ListeCartes {

private :
  Carte* listeChance;
  Carte* hautPileChance;
  Carte* listeCommunaute;
  Carte* hautPileCommunaute;

public :
  ListeCartes();
  void tirageChance();
  void tirageCommunaute();

};
