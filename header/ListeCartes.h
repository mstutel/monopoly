#include "Carte.h"

class ListeCartes {

private :
  Cartes* listeCartesChance[];
  Cartes* listeCartesCommunaute[];

public :
  ListeCartes();
  void tirageChance();
  void tirageCommunaute();

};
