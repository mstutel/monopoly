#include "../header/Carte.h"
#include "../header/Joueur.h"

Carte :: Carte(int indice, int transaction, bool positionGlobale, int changePosition, string description) {
    this->indice=indice;
    this->transaction=transaction;
    this->positionGlobale=positionGlobale;
    this->changePosition=changePosition;
    this->description=description;
}

void Carte :: action(Joueur J) {

    int p = J.getPosition();
    int m = J.getArgent();
    int ecart;
    if (positionGlobale)
      ecart=changePosition-p;
    else 
      ecart=changePosition;
    J.setPosition(p+ecart);
    J.setArgent(m+transaction);
    cout<<description;
  
}
