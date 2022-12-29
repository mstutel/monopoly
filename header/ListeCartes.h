#include "Carte.h"

class ListeCartes {

private :
  Carte* listeChance;
  Carte* hautPileChance;
  Carte* listeCommunaute;
  Carte* hautPileCommunaute;

public :
  ListeCartes();
  Carte tirageChance();
  Carte tirageCommunaute();

};
