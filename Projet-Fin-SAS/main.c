#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

struct Joueurs {
    int idUnique;
    char nom[30];
    char prenom[30];
    int numeroMaillot;
    char posteJoueur[25];
    int numeroPost;
    int ageJoueur;
    int numeroButs;
};

struct Joueurs joueur[50];
int numeroJoueurs = 0;
int id = 1;

// Ajouter
void AjouterUnJoueur() {
    int choix1=0, choix2;
    joueur[numeroJoueurs].idUnique = id;
    printf("Veuillez enter le nom de joueur %d: ", numeroJoueurs + 1);
    scanf("%s", joueur[numeroJoueurs].nom);
    printf("Veuillez enter le prenom de joueur %d: ", numeroJoueurs + 1);
    scanf("%s", joueur[numeroJoueurs].prenom);
    printf("Veuillez enter le numero Maillot de joueur %d: ", numeroJoueurs + 1);
    scanf("%d", &joueur[numeroJoueurs].numeroMaillot);
    printf("1 - gardien\n");
    printf("2 - defenseur\n");
    printf("3 - milieu\n");
    printf("4 - attaquant\n");
    printf("Veuillez choisisez la poste de joueur %d: ", numeroJoueurs + 1);
    scanf("%d", &choix1);
    switch (choix1) {
        case 1: strcpy(joueur[numeroJoueurs].posteJoueur, "Gardien");
                joueur[numeroJoueurs].numeroPost = 1;
        break;
        case 2: strcpy(joueur[numeroJoueurs].posteJoueur, "Defenseur");
                joueur[numeroJoueurs].numeroPost = 2;
        break;
        case 3: strcpy(joueur[numeroJoueurs].posteJoueur, "Milieu");
                joueur[numeroJoueurs].numeroPost = 3;
        break;
        case 4: strcpy(joueur[numeroJoueurs].posteJoueur, "Attaquant");
                joueur[numeroJoueurs].numeroPost = 4;
        break;
    }
    printf("Veuillez enter l'age de joueur %d: ", numeroJoueurs + 1);
    scanf("%d", &joueur[numeroJoueurs].ageJoueur);
    printf("Veuillez enter le numero de buts de joueur %d: ", numeroJoueurs + 1);
    scanf("%d", &joueur[numeroJoueurs].numeroButs);
    id++;
    numeroJoueurs++;
}
void AjouterPlusieursJoueur() {
    int choix1=0, choix2;
    int nombreAjouter , njOriginal = numeroJoueurs;
    printf("Veuillez enter le nombre des joueurs qui tu veux ajouter: ");
    scanf("%d", &nombreAjouter);
    do {
        joueur[numeroJoueurs].idUnique = id;
        printf("Veuillez enter le nom de joueur %d: ", numeroJoueurs + 1);
        scanf("%s", joueur[numeroJoueurs].nom);
        printf("Veuillez enter le prenom de joueur %d: ", numeroJoueurs + 1);
        scanf("%s", joueur[numeroJoueurs].prenom);
        printf("Veuillez enter le numero Maillot de joueur %d: ", numeroJoueurs + 1);
        scanf("%d", &joueur[numeroJoueurs].numeroMaillot);
        printf("1 - gardien\n");
        printf("2 - defenseur\n");
        printf("3 - milieu\n");
        printf("4 - attaquant\n");
        printf("Veuillez choisisez la poste de joueur %d: ", numeroJoueurs + 1);
        scanf("%d", &choix1);
        switch (choix1) {
            case 1: strcpy(joueur[numeroJoueurs].posteJoueur, "Gardien");
                    joueur[numeroJoueurs].numeroPost = 1;
            break;
            case 2: strcpy(joueur[numeroJoueurs].posteJoueur, "Defenseur");
                    joueur[numeroJoueurs].numeroPost = 2;
            break;
            case 3: strcpy(joueur[numeroJoueurs].posteJoueur, "Milieu");
                    joueur[numeroJoueurs].numeroPost = 3;
            break;
            case 4: strcpy(joueur[numeroJoueurs].posteJoueur, "Attaquant");
                    joueur[numeroJoueurs].numeroPost = 4;
            break;
        }
        printf("Veuillez enter l'age de joueur %d: ", numeroJoueurs + 1);
        scanf("%d", &joueur[numeroJoueurs].ageJoueur);
        printf("Veuillez enter le numero de buts de joueur %d: ", numeroJoueurs + 1);
        scanf("%d", &joueur[numeroJoueurs].numeroButs);
        id++;
        numeroJoueurs++;
    } while (numeroJoueurs < nombreAjouter + njOriginal);
}
void Ajouter() {
    int i=0, choix=0;
    do {
        printf("\n");
        printf("1 - Ajouter un nouveau joueur\n");
        printf("2 - Ajouter plusieurs joueurs en une seule operation\n\n");
        printf("Veuillez choisissez une operation: ");
        scanf("%d", &choix);
    } while (choix < 1 || choix > 2);
    switch (choix) {
        case 1: AjouterUnJoueur();
        break;
        case 2: AjouterPlusieursJoueur();
        break;
    }
}

// Afficher
void AfficherParOrdreAlphabetique() {
    int i=0, j=0;
    for (i = 0; i < numeroJoueurs - 1; i++) {
        for(j = 0; j < numeroJoueurs - i - 1; j++) {
            if (strcmp(joueur[j].nom, joueur[j + 1].nom) > 0) {
                struct Joueurs temp = joueur[j + 1];
                joueur[j + 1] = joueur[j];
                joueur[j] = temp;

            }
        }
    }
    for (i = 0; i < numeroJoueurs; i++) {
        printf("\n");
        printf("id: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d", joueur[i].idUnique, joueur[i].nom, joueur[i].prenom, joueur[i].numeroMaillot, joueur[i].posteJoueur, joueur[i].ageJoueur, joueur[i].numeroButs);
    }
    printf("\n\n");
}
void AfficherParAge() {
    int i=0, j=0;
    for (i = 0; i < numeroJoueurs - 1; i++) {
        for (j = 0; j < numeroJoueurs - i - 1; j++) {
            if (joueur[j].ageJoueur > joueur[j + 1].ageJoueur) {
                struct Joueurs temp = joueur[j + 1];
                joueur[j + 1] = joueur[j];
                joueur[j] = temp;
            }
        }
    }
    for (i = 0; i < numeroJoueurs; i++) {
        printf("\n");
        printf("id: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d", joueur[i].idUnique, joueur[i].nom, joueur[i].prenom, joueur[i].numeroMaillot, joueur[i].posteJoueur, joueur[i].ageJoueur, joueur[i].numeroButs);
    }
    printf("\n\n");
}
void AfficherParPoste() {
    int i=0, j=0;
    for (i = 0; i < numeroJoueurs - 1; i++) {
        for (j = 0; j < numeroJoueurs - i - 1; j++) {
            if (joueur[j].numeroPost > joueur[j + 1].numeroPost) {
                struct Joueurs temp = joueur[j + 1];
                joueur[j + 1] = joueur[j];
                joueur[j] = temp;
            }
        }
    }
    for (i = 0; i < numeroJoueurs; i++) {
        printf("\n");
        printf("id: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d", joueur[i].idUnique, joueur[i].nom, joueur[i].prenom, joueur[i].numeroMaillot, joueur[i].posteJoueur, joueur[i].ageJoueur, joueur[i].numeroButs);
    }
    printf("\n\n");
}
void Afficher() {
    int i=0, choix=0;
    do {
        printf("\n");
        printf("1 - Afficher les joueurs par ordre alphabetique\n");
        printf("2 - Afficher les joueurs par age\n");
        printf("3 - Afficher les joueurs par poste\n\n");
        printf("Veuillez choisissez une operation: ");
        scanf("%d", &choix);
    } while (choix < 1 || choix > 3);
    switch (choix) {
        case 1: AfficherParOrdreAlphabetique();
        break;
        case 2: AfficherParAge();
        break;
        case 3: AfficherParPoste();
        break;
    }
}

// Modifier
void ModifierPoste() {}
void ModifierAge() {}
void ModifierNombreButs() {}
void Modifier() {
    int i=0, choix=0;
    do {
        printf("\n");
        printf("1 - Modifier le poste d'un joueur\n");
        printf("2 - Modifier l'age d'un joueur\n");
        printf("3 - Modifier le nombre de buts marques par un joueur\n\n");
        printf("Veuillez choisissez une operation: ");
        scanf("%d", &choix);
    } while (choix < 1 || choix > 3);
    switch (choix) {
        case 1: ModifierPoste();
        break;
        case 2: ModifierAge();
        break;
        case 3: ModifierNombreButs();
        break;
    }
}

//Supprimer
void Supprimer() {}

//Rechercher
void RechercherId() {}
void RechercherNom() {}
void Rechercher() {}

//Statistiques
void Statistiques() {}

int main () {
    int choix=0;
    do {
        printf("-- Gestion d'une Equipe de Football --\n\n");
        printf("1 -" GREEN " Ajouter un joueur\n" RESET);
        printf("2 - Afficher la liste de tous les joueurs\n");
        printf("3 - Modifier un joueur\n");
        printf("4 -" RED " Supprimer un joueur\n" RESET);
        printf("5 - Rechercher un joueur\n");
        printf("6 - Statistiques\n");
        printf("7 - Quitter\n\n");
        printf("Veuillez choisissez une operation: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: Ajouter();
            break;
            case 2: Afficher();
            break;
            case 3: Modifier();
            break;
            //case 4: Supprimer();
            //break;
            case 5: Rechercher();
            break;
            //case 6: Statistiques();
            //break;
        }
    } while ((choix < 1 || choix > 7) || choix != 7);
    return 0;
}
