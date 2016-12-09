#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp4.h"

Benevole *nouveauBen(char *nom, char *prenom , int CIN, char sexe, int annee){
    Benevole *ben=(Benevole*)malloc(sizeof(Benevole));
    strcpy(ben->nom,nom);
    strcpy(ben->prenom,prenom);
    ben->CIN = CIN;
    ben->sexe = sexe;
    ben->annee = annee;
    ben->suivant = NULL;

return ben;
}

Tranche *nouvelleTranche(int borneSup){

    Tranche *tranche =(Tranche*)malloc(sizeof(Tranche));
    //tranche ->liste = NULL;
    tranche -> pere = NULL;
    tranche -> filsG = NULL;
    tranche -> filsD = NULL;
    tranche -> borneSup = borneSup;

return tranche;
}

ListBenevoles *nouvelleListe(){
    ListBenevoles *liste = (ListBenevoles*)malloc(sizeof(ListBenevoles));
    liste -> tete = NULL;
    liste -> NbreElements = 0;

return liste;
}

Tranche *ajoutTranche(Tranche *racine , int borneSup){

    printf("FQFB1");
    Tranche *y = NULL;
    if (racine != NULL)
        Tranche *x = racine;
    Tranche *z = nouvelleTranche(borneSup);

    while ( x->borneSup != NULL) {
        printf("FQFB2");
        y=x;
        if (z->borneSup < x->borneSup)
            x=x->filsG;
        else if (z->borneSup == x->borneSup)
            return NULL;
        else
            x=x->filsD;
    }

    z->pere = y;


    if (y == NULL ){
        printf("FQFB3");
        x=z;
    }
    else {
            printf("FQFB4");
        if (z->borneSup < y->borneSup)
            y->filsG=z;
        else
            y->filsD=z;

         }

return z;
}
