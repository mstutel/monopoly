#include "../header/ListeCartes.h"

ListeCartes::ListeCartes() {
   
   /* Création de la pile de cartes Chance*/
   listeChance = new Carte[16];
   listeChance[0]=Carte(50, false, 0, "La Banque vous verse une dividende de 50€.", null);
   listeChance[1]=Carte(-20, false, 0,"Amende pour ivresse : 20€.",listeChance[0]);
   listeChance[2]=Carte(-15, false, 0,"Amende pour excès de vitesse : 15€.",listeChance[1]);
   listeChance[3]=Carte(100, false, 0,"Vous avez gagné le prix de mots croisés. Recevez 100€.",listeChance[2]);
   listeChance[4]=Carte(-150, false, 0,"Payez pour frais de scolarité 150€.",listeChance[3]);
   listeChance[5]=Carte(150, false, 0,"Votre immeuble et votre prêt rapportent. Vous devez toucher 150€.",listeChance[4]);
   listeChance[6]=Carte(0,true,24,"Rendez-vous à l'Avenue Henri-Martin.",listeChance[5]);
   listeChance[7]=Carte(0,true,30,"Allez en prison.",listeChance[6]);
   listeChance[8]=Carte(0,true,0,"Avancez jusqu'à la case Départ.",listeChance[7]);
   listeChance[9]=Carte(0,true,39,"Rendez-vous à la rue de la Paix.",listeChance[8]);
   listeChance[10]=Carte(0,true,15,"Allez à la gare de Lyon."),listeChance[9];
   listeChance[11]=Carte(0,true,11,"Avancez au Boulevard de la Vilette.",listeChance[10]);
   listeChance[12]=Carte(0,false,0,"Faites des réparations dans vos maisons. Versez pour chaque maison 25€ et versez pour chaque hôtel 100€.",listeChance[11],);
   listeChance[13]=Carte(14,0,0,0,0,1,-1,"Faites des réparations dans vos maisons. Versez pour chaque maison 40€ et versez pour chaque hôtel 115€.");
   listeChance[14]=Carte(15,1,0,0,0,0,-1,"Reculez de trois cases.");
   listeChance[15]=Carte(16,0,0,1,0,0,-1,"Vous êtes libéré de prison. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée.");
   

}
