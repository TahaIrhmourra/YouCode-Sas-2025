#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Les_Titres[100][25], Les_Auteurs[100][25];
float Les_Prix[100];
int Les_Quantites[100], i, choix;
int nombre_livre = 0;

void Ajouter() {
    int i = nombre_livre, Autre_fois = 0;
        do {
            if (nombre_livre == 100) {
                printf("Le max des livres");
                break;
            }
            printf("Veuillez entrer Le titre de livre %d: ", i + 1);
            scanf("%s", &Les_Titres[i]);
            printf("Veuillez entrer L'auteur de livre %d: ", i + 1);
            scanf("%s", &Les_Auteurs[i]);
            printf("Veuillez entrer Le prix de livre %d: ", i + 1);
            scanf("%f", &Les_Prix[i]);
            printf("Veuillez entrer La Quantite de livre %d: ", i + 1);
            scanf("%d", &Les_Quantites[i]);
            i++;
            nombre_livre++;
            printf("\nVoulez vous ajouter un autre livre ? 1 - oui | 2 - non: ");
            scanf("%d", &Autre_fois);
            printf("\n");
            if (Autre_fois == 2) {
                Autre_fois = 0;
            }
        } while (Autre_fois == 1);
    }
void Afficher() {
        if (nombre_livre == 0) {
                printf("\nAucun Livre dans la list\n\n");
        } else {
            for (i = 0; i < nombre_livre; i++) {
                printf("Livre n%d | Titre: %s | Auteur: %s | Prix: %.2f DH | Quantite: %d\n", i + 1, Les_Titres[i], Les_Auteurs[i], Les_Prix[i], Les_Quantites[i]);
            }
        }
        printf("\n");
    }
void Modifier() {
    if (nombre_livre == 0) {
        printf("Aucun Livre dans la list\n\n");
    } else {
        char titre_livre[25];
        int i, titre_inccorect = 0, NV;
        printf("Veuillez enter le titre de livre: ");
        scanf("%s", &titre_livre);
        for (i = 0; i < nombre_livre; i++) {
        if (strcmp(Les_Titres[i], titre_livre) == 0) {
            printf("Veuillez enter la Nouvelle Quantite: ");
            scanf("%d", &NV);
            Les_Quantites[i] = NV;
            printf("\n");
        } else {
            titre_inccorect = 1;
        }
    }
        if (titre_inccorect == 1) printf("\nLe titre de livre est incorrecte\n\n");
    }
}
void Supprimer() {
    if (nombre_livre == 0) {
        printf("Aucun Livre dans la list\n\n");
    } else {
        char titre_livre[25];
        int i, j, titre_inccorect = 0, NV;
        printf("Veuillez enter le titre de livre: ");
        scanf("%s", &titre_livre);
        for (i = 0; i < nombre_livre; i++) {
        if (strcmp(Les_Titres[i], titre_livre) == 0) {
            for (j = i; j < nombre_livre; j++) {
                strcpy(Les_Titres[j], Les_Titres[j + 1]);
                strcpy(Les_Auteurs[j], Les_Auteurs[j + 1]);
                Les_Prix[j] = Les_Prix[j + 1];
                Les_Quantites[j] = Les_Quantites[j + 1];
            }
            nombre_livre--;
            printf("\n");
        } else {
            titre_inccorect = 1;
        }
    }
        if (titre_inccorect == 1) printf("\nLe titre de livre est incorrecte\n\n");
    }
}
void Total() {
    int total_stock;
    for (i = 0; i < nombre_livre; i++) {
        total_stock += Les_Quantites[i];
    }
    printf("le Nombre Total de Livres en Stock est: %d\n\n", total_stock);
}
int main () {
    do {
        printf("-- Menu --\n\n");
        printf("1 - Ajouter un Livre au Stock (100 max)\n");
        printf("2 - Afficher Tous les Livres Disponibles\n");
        printf("3 - Mettre a Jour la Quantite d'un Livre\n");
        printf("4 - Supprimer un Livre du Stock\n");
        printf("5 - Afficher le Nombre Total de Livres en Stock\n");
        printf("6 - Quitter\n\n");
        printf("Veuillez choisiser une operation: ");
        scanf("%d", &choix);
        printf("\n");
        switch(choix) {
            case 1: Ajouter();
            break;
            case 2: Afficher();
            break;
            case 3: Modifier();
            break;
            case 4: Supprimer();
            break;
            case 5: Total();
            break;
        }
    } while (choix != 6);
    return 0;
}
