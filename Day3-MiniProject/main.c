#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lesContact {
    char nomContact[25];
    int numeroTelephone;
    char adresseMail[30];
};

struct lesContact contact[9999];
int numeroContact=0;

void Ajouter() {
    printf("\n");
    int choix;
    do {
        printf("Veuillez enter le nom du contact %d: ", numeroContact + 1);
        scanf("%s", &contact[numeroContact].nomContact);
        printf("Veuillez enter le numero du contact %d: ", numeroContact + 1);
        scanf("%d", &contact[numeroContact].numeroTelephone);
        printf("Veuillez enter l'adresse email du contact %d: ", numeroContact + 1);
        scanf("%s", &contact[numeroContact].adresseMail);
        printf("\nVoulez vous enter un autre contact? 1 - Oui / 2 - Non: ");
        scanf("%d", &choix);
        numeroContact++;
        printf("\n");
        if (choix == 1) choix = 1;
        else choix = 0;
    } while (choix != 0);
}

void Modifier() {
    if (numeroContact == 0) {
        printf("\nAucun contact dans la list, Veuillez Ajouter un contact!\n\n");
    } else {
        char contactModifier[25];
        int nonTrouver=0, i=0;
        printf("Veuillez enter le nom de contact: ");
        scanf("%s", &contactModifier);
        for (i = 0; i < numeroContact; i++) {
        if (strcmp(contact[i].nomContact, contactModifier) == 0) {
                printf("Veuillez enter le nouveau numero: ");
                scanf("%d", &contact[i].numeroTelephone);
                printf("Veuillez enter la nouvelle adresse e-mail: ");
                scanf("%s", &contact[i].adresseMail);
                nonTrouver = 1;
                printf("\n");
            }
        }
        if (nonTrouver == 0) printf("\nle contact est non trouver dans la list");
        printf("\n");
    }
}

void Supprimer() {
    if (numeroContact == 0) {
        printf("\nAucun contact dans la list, Veuillez Ajouter un contact!\n\n");
    } else {
        char contactSupprimer[25];
        int nonTrouver=0, i=0, j=0;
        printf("\nVeuillez enter le nom de contact: ");
        scanf("%s", &contactSupprimer);
        for (i = 0; i < numeroContact; i++) {
        if (strcmp(contact[i].nomContact, contactSupprimer) == 0) {
                for (j = i; j < numeroContact - 1; j++) {
                    contact[j] = contact[j + 1];
                }
                    numeroContact--;
                    nonTrouver = 1;
                    break;
            }
        }
        if (nonTrouver == 0) printf("\nle contact est non trouver dans la list");
        printf("\n");
    }
}

void Afficher() {
    if (numeroContact == 0) {
        printf("\nAucun contact dans la list, Veuillez Ajouter un contact!\n\n");
    } else {
        int i;
        for (i = 0; i < numeroContact; i++) {
            printf("\nContact ~ %d | Nom: %s | Numero: 0%d | E-mail: %s", i + 1, contact[i].nomContact, contact[i].numeroTelephone, contact[i].adresseMail);
        }
        printf("\n\n");
    }
}

void Rechercher() {
    if (numeroContact == 0) {
        printf("\nAucun contact dans la list, Veuillez Ajouter un contact!\n\n");
    } else {
        char contactChercher[25];
        int nonTrouver=0, i=0;
        printf("Veuillez enter le nom de contact: ");
        scanf("%s", &contactChercher);
        for (i = 0; i < numeroContact; i++) {
        if (strcmp(contact[i].nomContact, contactChercher) == 0) {
                printf("\nContact ~ %d | Nom: %s | Numero: 0%d | E-mail: %s", i + 1, contact[i].nomContact, contact[i].numeroTelephone, contact[i].adresseMail);
                nonTrouver = 1;
                break;
            }
        }
        if (nonTrouver == 0) printf("\nle contact est non trouver dans la list");
        printf("\n\n");
    }
}

int main () {
    int choix;
    do {
        printf("-- Systeme de Gestion de Contact --\n\n");
        printf("1 - Ajouter un Contact\n");
        printf("2 - Modifier un Contact\n");
        printf("3 - Supprimer un Contact\n");
        printf("4 - Afficher Tous les Contacts\n");
        printf("5 - Rechercher un Contact\n");
        printf("6 - Quitter\n\n");
        printf("Veuillez Choisisez une operation: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: Ajouter();
            break;
            case 2: Modifier();
            break;
            case 3: Supprimer();
            break;
            case 4: Afficher();
            break;
            case 5: Rechercher();
            break;
        }
    } while (choix != 6);
    return 0;
}
