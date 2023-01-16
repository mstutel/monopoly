#pragma once
#include "Jeu.h"
using namespace std;

class Groupe
{
    private:
        Case* listeElements[3];
        int taille;

    public:
        Groupe();
        Groupe(Case a, Case b);
        Groupe(Case a, Case b, Case c);

        int getTaille();      
        Case* getElement(int index);
};