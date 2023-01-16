#include "Jeu.h"

void Jeu::TourSuivant() {
    for (int i=0; i<4; i++) { //faudrait mettre size(joueurs psq un joueur peut etre élminé)
        Joueur* joueurActuel = joueurs[i];
        des.LancerLesDes();
        joueurActuel->avancer(des.resultat());
        joueurActuel->getPosition()->arreterSur(joueurActuel);
    }
    tourActuel++;
}

void Jeu::VerifierFin() {
    for (auto joueur : joueurs) {
        if (joueur->GetSolde() >= 5000) {
            gagnant = joueur;
            break;
        }
    }
}

void Jeu::Commencer() {
    tourActuel = 1;
    while (gagnant == nullptr) {
        TourSuivant();
        VerifierFin();
    }
    cout << gagnant->GetNom() << " a gagne la partie !" << endl;
}

