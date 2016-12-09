#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp4.h"
#include "tp4.c"

int main()
{

int choix,borneSup;
int v_tranche =0 ;
Tranche *racinegenerale,*tranche;
printf("\n********** Ajout d'une tranche **********\n\n");

do{
scanf("%d",&choix);
fflush(stdin); // Cette commande permet de vider le buffer clavier et d'éviter pas mal de bug dans la suite du programme même si ce n'est pas la plus recommandée
switch (choix) {


    case 1 : {
            system("cls"); //cette commande permet d'effacer le contenu de la console
            printf("\n********** Ajout d'une tranche **********\n\n");
            scanf("%d",&borneSup);
            if (v_tranche == 1) { // On vérifie si un magasin a déjà été créé
                tranche = ajoutTranche(racinegenerale,borneSup);
                printf("\nNoeud initialise ! \n");
            }

            else {
                    racinegenerale = ajoutTranche(NULL,borneSup);
                    printf("\nPremier noeud initialise ! \n");
                    v_tranche =1;
                }
            break;
            }
}
}
while (choix !=9); // Le menu ainsi que toutes les options seront disponibles tant que l'utilisateur choisi de ne pas quitter
return 0;



}
