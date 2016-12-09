#ifndef TP4_H_INCLUDED
#define TP4_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


typedef struct benevole
{
    char nom[20];
    char prenom[20];
    char sexe;
    int annee;
    int CIN;
    struct benevole *suivant
            ;
} Benevole;

typedef struct listbenevoles
{
    int NbreElements;
    struct benevole *tete;
} ListBenevoles;

typedef struct tranche
{
    int borneSup;
    ListBenevoles liste;
    struct tranche *pere;
    struct tranche *filsG;
    struct tranche *filsD;
} Tranche;

Benevole *nouveauBen(char *nom, char *prenom , int CIN, char sexe, int annee);
Tranche *nouvelleTranche(int borneSup);
ListBenevoles *nouvelleListe();
Tranche *ajoutTranche(Tranche *racine , int borneSup);
Benevole *insererBen(Tranche *racine , Benevole *benevole);
Benevole *chercherBen(Tranche *racine ,int CIN, int *annee);
int supprimerBen(Tranche *racine , int CIN, int annee);
int supprimerTranche(Tranche *racine , int borneSup);
ListBenevoles *BenDhonneur(Tranche *racine);
int actualiser(Tranche *racine);
int totalBenTranche(Tranche *racine , int borneSup);
int totalBen(Tranche *racine);
float pourcentageTranche(Tranche *racine , int borneSup);
void afficherTranche(Tranche *racine , int borneSup);
void afficherArbre(Tranche *racine);


#endif // TP4_H_INCLUDED
