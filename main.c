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
fflush(stdin); // Cette commande permet de vider le buffer clavier et d'�viter pas mal de bug dans la suite du programme m�me si ce n'est pas la plus recommand�e
switch (choix) {


    case 1 : {
            system("cls"); //cette commande permet d'effacer le contenu de la console
            printf("\n********** Ajout d'une tranche **********\n\n");
            scanf("%d",&borneSup);
            if (v_tranche == 1) { // On v�rifie si un magasin a d�j� �t� cr��
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
