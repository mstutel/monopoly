#include "Carte.h"

class ListeCartes {

private :
  Carte* listeCartesChance;
  Carte* hautPileChance;
  Carte* listeCartesCommunaute;
  Carte* hautPileCommunaute;

public :
  ListeCartes();
  void tirageChance();
  void tirageCommunaute();

};
