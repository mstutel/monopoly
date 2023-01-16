pair<int,int> Jeu::LancerLesDes() {
    int de1 = rand() % 6 + 1;
    int de2 = rand() % 6 + 1;
    return make_pair(de1, de2);
}

void Jeu::TourSuivant() {
    for (auto joueur : joueurs_) {
        auto des = LancerLesDes();
        int mouvements = des.first + des.second;
        int positionActuelle = joueur->getPosition();
        int nouvellePosition = (positionActuelle + mouvements) % 40;
        joueur->setPosition(nouvellePosition);
        auto espace = plateau_->GetEspace(nouvellePosition); #Pas sûr de cette ligne-là, jsp trop à quoi ça correspond
        espace->ArreterSur();
    }
    tourActuel_++;
}

void Jeu::VerifierFin() {
    for (auto joueur : joueurs_) {
        if (joueur->GetSolde() >= 5000) {
            gagnant_ = joueur;
            break;
        }
    }
}

void Jeu::Commencer() {
    tourActuel_ = 1;
    while (gagnant_ == nullptr) {
        TourSuivant();
        VerifierFin();
    }
    cout << gagnant_->GetNom() << " a gagne la partie !" << endl;
}

