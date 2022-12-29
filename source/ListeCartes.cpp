#include "../header/ListeCartes.h"

ListeCartes::ListeCartes() {
   
   /* Création de la pile de cartes Chance*/
   listeChance = new Carte[16];
   listeChance[0]=Carte(50, false, 0, "La Banque vous verse une dividende de 50€.", null);
   listeChance[1]=Carte(-20, false, 0,"Amende pour ivresse : 20€.",&listeChance[0]);
   listeChance[2]=Carte(-15, false, 0,"Amende pour excès de vitesse : 15€.",&listeChance[1]);
   listeChance[3]=Carte(100, false, 0,"Vous avez gagné le prix de mots croisés. Recevez 100€.",&listeChance[2]);
   listeChance[4]=Carte(-150, false, 0,"Payez pour frais de scolarité 150€.",listeChance[3]);
   listeChance[5]=Carte(150, false, 0,"Votre immeuble et votre prêt rapportent. Vous devez toucher 150€.",&listeChance[4]);
   listeChance[6]=Carte(0,true,24,"Rendez-vous à l'Avenue Henri-Martin.",&listeChance[5]);
   listeChance[7]=Carte(0,true,30,"Allez en prison.",&listeChance[6]);
   listeChance[8]=Carte(0,true,0,"Avancez jusqu'à la case Départ.",&listeChance[7]);
   listeChance[9]=Carte(0,true,39,"Rendez-vous à la rue de la Paix.",&listeChance[8]);
   listeChance[10]=Carte(0,true,15,"Allez à la gare de Lyon."),&listeChance[9];
   listeChance[11]=Carte(0,true,11,"Avancez au Boulevard de la Vilette.",&listeChance[10]);
   listeChance[12]=Carte(0,false,0,"Faites des réparations dans vos maisons. Versez pour chaque maison 25€ et versez pour chaque hôtel 100€.",&listeChance[11],false,true);
   listeChance[13]=Carte(0,false,0,"Faites des réparations dans vos maisons. Versez pour chaque maison 40€ et versez pour chaque hôtel 115€.",&listeChance[12],false,true);
   listeChance[14]=Carte(0,false,-3,"Reculez de trois cases.",&listeChance[13]);
   listeChance[15]=Carte(0,false,0,"Vous êtes libéré de prison. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée.",&listeChance[14],true);
   listeChance[0].setSuivant(&listeChance[15]);
   
   
   /* Création de la pile de cartes Communauté*/
   listeCommunaute = new Carte[14];
   listeCommunaute[0]=Carte(100, false, 0, "Recevez votre revenu annuel 100€.", null);
   listeCommunaute[1]=Carte(50, false, 0,"La vente de votre stock vous rapporte 50€.",&listeCommunaute[0]);
   listeCommunaute[2]=Carte(-100, false, 0,"Payez à l'Hôpital 100€.",&listeCommunaute[1]);
   listeCommunaute[3]=Carte(25, false, 0,"Recevez votre intérêt sur l'emprunt à 7%, 25€.",&listeCommunaute[2]);
   listeCommunaute[4]=Carte(20, false, 0,"Les Contributions vous remboursent la somme de 20€.",&listeCommunaute[3]);
   listeCommunaute[5]=Carte(200, false, 0,"Erreur de la Banque en votre faveur. Recevez 200€.",&listeCommunaute[4]);
   listeCommunaute[6]=Carte(-50,false,0,"Payez la note du Médecin 50€.",&listeCommunaute[5]);
   listeCommunaute[7]=Carte(100,false,0,"Vous héritez 100€.",&listeCommunaute[6]);
   listeCommunaute[8]=Carte(50,false,0,"Payez votre police d'assurance s'élevant à 50€.",&listeCommunaute[7]);
   listeCommunaute[9]=Carte(10,false,0,"Vous avez gagné le deuxième Prix de Beauté. Recevez 10€.",&listeCommunaute[8]);
   listeCommunaute[10]=Carte(0,true,30,"Allez en prison.",&listeCommunaute[9]);
   listeCommunaute[11]=Carte(0,true,0,"Avancez jusqu'à la case Départ.",&listeCommunaute[10]);
   listeCommunaute[12]=Carte(0,true,1,"Retournez à Belleville.",&listeCommunaute[11]);
   listeCommunaute[13]=Carte(0,false,0,"Vous êtes libéré de prison. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée.",&listeCommunaute[12],true);
   listeCommunaute[0].setSuivant(&listeCommunaute[13]);
   
   /* Initialisation des pointeurs de haut de pile pour leurs piles respectives*/
   hautChance=&listeChance[0];
   hautCommunaute=&listeCommunaute[0];
   

}
