#include "../header/Carte.h"
#include "../header/Joueur.h"

Carte :: Carte(int transaction, bool positionGlobale, int changePosition, string description, Carte* suivant bool isLiberation, bool isReparation) {
    
    this->transaction=transaction;
    this->positionGlobale=positionGlobale;
    this->changePosition=changePosition;
    this->description=description;
    this->suivant=suivant;
    this->isLiberation=isLiberation;
    this->isReparation=isReparation;
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
    
    if (isLiberation) {
        /*il faudrait ajouter une variable booléenne pour la classe Joueur (ou alors dans la classe Jeu) qui indique si le joueur est emprisonne*/
        if (J.getIsEmprisone) /*si le joueur est emprisonné*/{
            cout<<"Vous êtes chanceux! Utiliser la carte ? (Oui/Non) "
            bool correct=false;
            while (!correct) {
                
                cin>>rep;
                if (rep=="Oui") {
                    
                    J.setIsEmprisone(false);
                    cout<<"Bravo! Vous êtes libre!";
                    correct=true;
                }
                
                else if (rep=="Non") {
                    
                    cout<<"Dommage... Attendez encore.";
                    correct=true;
                
                }
                
                else {
                    cout<<"Je n'ai pas compris votre réponse, répondez par 'Oui' ou 'Non'."
                
                }
                
                
             }
        }
        
        else /*si le joueur n'est pas emprisonné*/ {
        
            /*à faire : il faut mémoriser si le joueur a une carte Libération (peut-être dans la classe Jeu)*/
           
        }
    }
    
    if (isReparation){
        /* à faire : il pouvoir connaître les propriétés pour chaque joueur (peut-être dans la classe Jeu)*/
    
    }
              
}

void Carte::setSuivant(Carte suivant){
    
    this->suivant=suivant;

}

Carte Carte::getSuivant(){

    return suivant;

}
