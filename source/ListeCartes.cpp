#include "../header/ListeCartes.h"

ListeCartes::ListeCartes() {
   
   /* Création de la pile de cartes Chance*/
   listeChance = new Carte[16];
   listeChance[0]=Carte(1,0,50,0,0,0,-1,"La Banque vous verse une dividende de 50€.");
   listeChance[1]=Carte(2,0,-20,0,0,0,-1,"Amende pour ivresse : 20€.");
   listeChance[2]=Carte(3,0,-15,0,0,0,-1,"Amende pour excès de vitesse : 15€.");
   listeChance[3]=Carte(4,0,100,0,0,0,-1,"Vous avez gagné le prix de mots croisés. Recevez 100€.");
   listeChance[4]=Carte(5,0,-150,0,0,0,-1,"Payez pour frais de scolarité 150€.");
   listeChance[5]=Carte(6,0,150,0,0,0,-1,"Votre immeuble et votre prêt rapportent. Vous devez toucher 150€.");
   listeChance[6]=Carte(7,0,0,0,0,0,24,"Rendez-vous à l'Avenue Henri-Martin.");
   listeChance[7]=Carte(8,0,0,0,0,0,30,"Allez en prison.");
   listeChance[8]=Carte(9,0,0,0,0,0,0,"Avancez jusqu'à la case Départ.");
   listeChance[9]=Carte(10,0,0,0,0,0,39,"Rendez-vous à la rue de la Paix.");
   listeChance[10]=Carte(11,0,0,0,0,0,15,"Allez à la gare de Lyon.");
   listeChance[11]=Carte(12,0,0,0,0,0,11,"Avancez au Boulevard de la Vilette.");
   listeChance[12]=Carte(13,0,0,0,1,0,-1,"Faites des réparations dans vos maisons. Versez pour chaque maison 25€ et versez pour chaque hôtel 100€.");
   listeChance[13]=Carte(14,0,0,0,0,1,-1,"Faites des réparations dans vos maisons. Versez pour chaque maison 40€ et versez pour chaque hôtel 115€.");
   listeChance[14]=Carte(15,1,0,0,0,0,-1,"Reculez de trois cases.");
   listeChance[15]=Carte(16,0,0,1,0,0,-1,"Vous êtes libéré de prison. Cette carte peut être conservée jusqu'à ce qu'elle soit utilisée.");
   

}
