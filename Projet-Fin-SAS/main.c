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
    int jourInc;
    char moisInc[25];
    int anneeInc;
    char status[25];
};

struct Joueurs joueur[50] = {
    {1, "Messi", "Lionel", 10, "Attaquant", 1, 36, 700, 10, "Juin", 2004, "titulaire"},
    {2, "Ronaldo", "Cristiano", 7, "Attaquant", 1, 39, 820, 12, "Juillet", 2002, "titulaire"},
    {3, "Mbappe", "Kylian", 11, "Attaquant", 1, 26, 250, 20, "Aout", 2015, "remplacant"},
    {4, "Haaland", "Erling", 9, "Attaquant", 1, 24, 180, 5, "Janvier", 2019, "titulaire"},
    {5, "Neymar", "Junior", 10, "Gardien", 2, 32, 400, 13, "Mai", 2010, "titulaire"},
    {6, "Modric", "Luka", 19, "Milieu", 3, 39, 150, 2, "Mars", 2003, "remplacant"},
    {7, "Salah", "Mohamed", 11, "Attaquant", 2, 33, 230, 8, "Avril", 2012, "titulaire"},
    {8, "Kane", "Harry", 9, "Attaquant", 1, 31, 310, 14, "Fevrier", 2011, "titulaire"},
    {9, "DeBruyne", "Kevin", 17, "Gardien", 3, 34, 160, 7, "Septembre", 2009,"remplacant"},
    {10,"Hakimi", "Achraf", 2, "Defenseur", 4, 26, 60, 3, "Octobre", 2017, "titulaire"}
};

int numeroJoueurs = 10;
int id = 11;

// Ajouter
void AjouterUnJoueur() {
    int choix1=0, choix2=0, choixDate=0;
    // id
    joueur[numeroJoueurs].idUnique = id;
    // nom
    printf("Veuillez enter le nom de joueur %d: ", numeroJoueurs + 1);
    scanf("%s", joueur[numeroJoueurs].nom);
    // prenom
    printf("Veuillez enter le prenom de joueur %d: ", numeroJoueurs + 1);
    scanf("%s", joueur[numeroJoueurs].prenom);
    // maillot
    int doubleMaillot = 1;
    do {
        int i, Nmaillot;
            printf("Veuillez enter le numero Maillot de joueur %d: ", numeroJoueurs + 1);
            scanf("%d", &Nmaillot);
            for (i = 0; i < numeroJoueurs; i++) {
                if (joueur[i].numeroMaillot == Nmaillot) {
                    doubleMaillot = 1;
                    printf("\nNumero do maillot deja utiliser\n\n");
                    break;
                } else {
                    joueur[numeroJoueurs].numeroMaillot = Nmaillot;
                    doubleMaillot = 0;
                break;
                }
            }
    } while (doubleMaillot == 1);
    // poste
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
    // age
    printf("Veuillez enter l'age de joueur %d: ", numeroJoueurs + 1);
    scanf("%d", &joueur[numeroJoueurs].ageJoueur);
    // butd
    printf("Veuillez enter le numero de buts de joueur %d: ", numeroJoueurs + 1);
    scanf("%d", &joueur[numeroJoueurs].numeroButs);
    // date d'inscription
    printf("Veuillez enter la date d'inscription de joueur %d", numeroJoueurs + 1);
        // jour
    printf("\n1 - enter le jour: ");
    scanf("%d", &joueur[numeroJoueurs].jourInc);
        // mois
    char lesMois[12][15] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
    printf("2 - enter le mois: ");
    int moisEnter;
    scanf("%d", &moisEnter);
    strcpy(joueur[numeroJoueurs].moisInc, lesMois[moisEnter - 1]);
        // annee
    printf("1 - enter l'annee: ");
    scanf("%d", &joueur[numeroJoueurs].anneeInc);
    // statue
    printf("1 - titulaire\n");
    printf("2 - remplaçant\n");
    printf("Veuillez indique si le joueur %d est"GREEN" titulaire "RESET"ou" RED" remplacant"RESET": ", numeroJoueurs + 1);
    scanf("%d", &choix2);
    switch (choix2) {
        case 1: strcpy(joueur[numeroJoueurs].status, "titulaire");
        break;
        case 2: strcpy(joueur[numeroJoueurs].status, "remplacant");
        break;
    }
    id++;
    numeroJoueurs++;
    printf("\n\n");
}
void AjouterPlusieursJoueur() {
    int choix1=0, choix2;
    int nombreAjouter , njOriginal = numeroJoueurs;
    printf("Veuillez enter le nombre des joueurs qui tu veux ajouter: ");
    scanf("%d", &nombreAjouter);
    do {
        // id
        joueur[numeroJoueurs].idUnique = id;
        // nom
        printf("Veuillez enter le nom de joueur %d: ", numeroJoueurs + 1);
        scanf("%s", joueur[numeroJoueurs].nom);
        // prenom
        printf("Veuillez enter le prenom de joueur %d: ", numeroJoueurs + 1);
        scanf("%s", joueur[numeroJoueurs].prenom);
        // maillot
        int doubleMaillot = 1;
        do {
            int i, Nmaillot;
            printf("Veuillez enter le numero Maillot de joueur %d: ", numeroJoueurs + 1);
            scanf("%d", &Nmaillot);
            for (i = 0; i < numeroJoueurs; i++) {
                if (joueur[i].numeroMaillot == Nmaillot) {
                    doubleMaillot = 1;
                    printf("\nNumero do maillot deja utiliser\n\n");
                    break;
                } else {
                    joueur[numeroJoueurs].numeroMaillot = Nmaillot;
                    doubleMaillot = 0;
                break;
                }
            }
        } while (doubleMaillot == 1);
        // poste
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
        // age
        printf("Veuillez enter l'age de joueur %d: ", numeroJoueurs + 1);
        scanf("%d", &joueur[numeroJoueurs].ageJoueur);
        // butd
        printf("Veuillez enter le numero de buts de joueur %d: ", numeroJoueurs + 1);
        scanf("%d", &joueur[numeroJoueurs].numeroButs);
        // date d'inscription
        printf("Veuillez enter la date d'inscription de joueur %d", numeroJoueurs + 1);
            // jour
        printf("\n1 - enter le jour: ");
        scanf("%d", &joueur[numeroJoueurs].jourInc);
            // mois
        char lesMois[12][15] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
        printf("2 - enter le mois: ");
        int moisEnter;
        scanf("%d", &moisEnter);
        strcpy(joueur[numeroJoueurs].moisInc, lesMois[moisEnter - 1]);
            // annee
        printf("1 - enter l'annee: ");
        scanf("%d", &joueur[numeroJoueurs].anneeInc);
        // statue
        printf("1 - titulaire\n");
        printf("2 - remplaçant\n");
        printf("Veuillez indique si le joueur %d est"GREEN" titulaire "RESET"ou" RED" remplacant"RESET": ", numeroJoueurs + 1);
        scanf("%d", &choix2);
        switch (choix2) {
            case 1: strcpy(joueur[numeroJoueurs].status, "titulaire");
            break;
            case 2: strcpy(joueur[numeroJoueurs].status, "remplacant");
            break;
        }
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
        printf("id: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d | Date D'inscription: %d-%s-%d | Statue: %s",
            joueur[i].idUnique,
            joueur[i].nom,
            joueur[i].prenom,
            joueur[i].numeroMaillot,
            joueur[i].posteJoueur,
            joueur[i].ageJoueur,
            joueur[i].numeroButs,
            joueur[i].jourInc,
            joueur[i].moisInc,
            joueur[i].anneeInc,
            joueur[i].status);
    }
    printf("\n\n");
}
void AfficherParAge() {
    int i=0, j=0;
    for (i = 0; i < numeroJoueurs - 1; i++) {
        for (j = 0; j < numeroJoueurs - i - 1; j++) {
            if (joueur[j].ageJoueur < joueur[j + 1].ageJoueur) {
                struct Joueurs temp = joueur[j + 1];
                joueur[j + 1] = joueur[j];
                joueur[j] = temp;
            }
        }
    }
    for (i = 0; i < numeroJoueurs; i++) {
        printf("\n");
        printf("id: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d | Date D'inscription: %d-%s-%d | Statue: %s",
            joueur[i].idUnique,
            joueur[i].nom,
            joueur[i].prenom,
            joueur[i].numeroMaillot,
            joueur[i].posteJoueur,
            joueur[i].ageJoueur,
            joueur[i].numeroButs,
            joueur[i].jourInc,
            joueur[i].moisInc,
            joueur[i].anneeInc,
            joueur[i].status);
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
        printf("id: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d | Date D'inscription: %d-%s-%d | Statue: %s",
            joueur[i].idUnique,
            joueur[i].nom,
            joueur[i].prenom,
            joueur[i].numeroMaillot,
            joueur[i].posteJoueur,
            joueur[i].ageJoueur,
            joueur[i].numeroButs,
            joueur[i].jourInc,
            joueur[i].moisInc,
            joueur[i].anneeInc,
            joueur[i].status);
    }
    printf("\n\n");
}
void Afficher() {
    if (numeroJoueurs == 0) {
        printf("\n");
        printf("Aucun Joueur dans la list");
        printf("\n\n");
    } else {
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
}

// Modifier
void ModifierPoste() {
    int idRechercher;
    printf("\n");
    printf("Veuillez enter le Identifiant de joueur: ");
    scanf("%d", &idRechercher);
    int i=0, choix;
    for (i = 0; i < numeroJoueurs; i++) {
        if (joueur[i].idUnique == idRechercher) {
            printf("1 - gardien\n");
            printf("2 - defenseur\n");
            printf("3 - milieu\n");
            printf("4 - attaquant\n");
            printf("Veuillez choisisez le nouveau poste: ");
            scanf("%d", &choix);
            switch (choix) {
                case 1: strcpy(joueur[i].posteJoueur, "Gardien");
                break;
                case 2: strcpy(joueur[i].posteJoueur, "Defenseur");
                break;
                case 3: strcpy(joueur[i].posteJoueur, "Milieu");
                break;
                case 4: strcpy(joueur[i].posteJoueur, "Attaquant");
                break;
            }
        }
    }
}
void ModifierAge() {
    int idRechercher;
    printf("\n");
    printf("Veuillez enter le Identifiant de joueur: ");
    scanf("%d", &idRechercher);
    int i=0, choix;
    for (i = 0; i < numeroJoueurs; i++) {
        if (joueur[i].idUnique == idRechercher) {
            int nvAge;
            printf("Veuillez enter le nouveau age: ");
            scanf("%d", &nvAge);
            joueur[i].ageJoueur = nvAge;
        }
    }
}
void ModifierNombreButs() {
    int idRechercher;
    printf("\n");
    printf("Veuillez enter le Identifiant de joueur: ");
    scanf("%d", &idRechercher);
    int i=0, choix;
    for (i = 0; i < numeroJoueurs; i++) {
        if (joueur[i].idUnique == idRechercher) {
            int nvButs;
            printf("Veuillez enter le nouveau nombre des buts: ");
            scanf("%d", &nvButs);
            joueur[i].numeroButs = nvButs;
        }
    }
}
void Modifier() {
    if (numeroJoueurs == 0) {
        printf("\n");
        printf("Aucun Joueur dans la list");
        printf("\n\n");
    } else {
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
}

//Supprimer
void Supprimer() {
    if (numeroJoueurs == 0) {
        printf("\n");
        printf("Aucun Joueur dans la list");
        printf("\n\n");
    } else {
        int idSupprimer;
        printf("\n");
        printf("Veuillez enter le Identifiant de joueur a supprimer: ");
        scanf("%d", &idSupprimer);
        int i=0, j=0;
        for (i = 0; i < numeroJoueurs; i++) {
            if (joueur[i].idUnique == idSupprimer) {
                for (j = i; j < numeroJoueurs - 1; j++) {
                    joueur[j] = joueur[j + 1];
                }
                numeroJoueurs--;
                break;
            }
        }
        printf("\n");
    }
}

//Rechercher
void RechercherId() {
    int idRechercher;
    printf("\n");
    printf("Veuillez enter le Identifiant de joueur: ");
    scanf("%d", &idRechercher);
    int i=0;
    for (i = 0; i < numeroJoueurs; i++) {
        if (joueur[i].idUnique == idRechercher) {
            printf("\nid: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d\n\n", joueur[i].idUnique, joueur[i].nom, joueur[i].prenom, joueur[i].numeroMaillot, joueur[i].posteJoueur, joueur[i].ageJoueur, joueur[i].numeroButs);
        }
    }
}
void RechercherNom() {
    char nomRechercher[25];
    printf("\n");
    printf("Veuillez enter le Nom de joueur: ");
    scanf("%s", nomRechercher);
    int i=0;
    for (i = 0; i < numeroJoueurs; i++) {
        if (strcmp(joueur[i].nom, nomRechercher) == 0) {
            printf("\nid: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d\n\n", joueur[i].idUnique, joueur[i].nom, joueur[i].prenom, joueur[i].numeroMaillot, joueur[i].posteJoueur, joueur[i].ageJoueur, joueur[i].numeroButs);
        }
    }
}
void Rechercher() {
    if (numeroJoueurs == 0) {
        printf("\n");
        printf("Aucun Joueur dans la list");
        printf("\n\n");
    } else {
        int i=0, choix=0;
        do {
            printf("\n");
            printf("1 - Rechercher un joueur par Identifiant\n");
            printf("2 - Rechercher un joueur par Nom\n\n");
            printf("Veuillez choisissez une operation: ");
            scanf("%d", &choix);
        } while (choix < 1 || choix > 2);
        switch (choix) {
            case 1: RechercherId();
            break;
            case 2: RechercherNom();
            break;
        }
    }

}

//Statistiques
void Statistiques() {
    if (numeroJoueurs == 0) {
        printf("\n");
        printf("Aucun Joueur dans la list");
        printf("\n\n");
    } else {
        //Buts
        int plusMarque;
        printf("Veuillez choisiser le nombre de but (Joueur plus marque): ");
        scanf("%d", &plusMarque);
        printf("\n-- Statistiques --\n");
        printf("\n");
        // Total Joueur
        printf("\n1 - Le nombre total des joueurs dans l'equipe est: %d\n", numeroJoueurs);
        // Moyenne
        int i, somme=0;
        for (i = 0; i < numeroJoueurs; i++) {
            somme += joueur[i].ageJoueur;
        }
        printf("2 - La moyen de l'age des joueurs d'equipe est: %d\n", somme / numeroJoueurs);
        // But plus marque:
        printf("3 - Les joueur qui ont marque plus de %d buts sont:", plusMarque);
        for (i = 0; i < numeroJoueurs; i++) {
            if (joueur[i].numeroButs > plusMarque) {
                printf("\nid: %d | nom: %s | prenom: %s | N maillot: %d | poste: %s | age: %d | N Buts: %d\n", joueur[i].idUnique, joueur[i].nom, joueur[i].prenom, joueur[i].numeroMaillot, joueur[i].posteJoueur, joueur[i].ageJoueur, joueur[i].numeroButs);
            }
        }
        printf("\n");
        // Meilleur buteur:
        int max = joueur[0].numeroButs;
        for (i = 0; i < numeroJoueurs; i++) {
            if (joueur[i].numeroButs > max) {
                max = joueur[i].numeroButs;
            }
        }
        for (i = 0; i < numeroJoueurs; i++) {
            if (joueur[i].numeroButs == max) {
                printf("4 - Le meilleur buteur dans l'equipe est %s %s avec %d buts\n", joueur[i].nom, joueur[i].prenom, joueur[i].numeroButs);
            }
        }
        // plus jeune plus age
        int j=0;
        for (i = 0; i < numeroJoueurs - 1; i++) {
            for (j = 0; j < numeroJoueurs - i - 1; j++) {
                if (joueur[j].ageJoueur > joueur[j + 1].ageJoueur) {
                    struct Joueurs temp = joueur[j + 1];
                    joueur[j + 1] = joueur[j];
                    joueur[j] = temp;
                }
            }
        }
        printf("5 - Le joueur le plus jeune et: %s %s a l'age %d\n", joueur[0].nom, joueur[0].prenom, joueur[0].ageJoueur);
        printf("6 - Le joueur le plus le plus age et: %s %s a l'age %d\n", joueur[numeroJoueurs - 1].nom, joueur[numeroJoueurs - 1].prenom, joueur[numeroJoueurs - 1].ageJoueur);
    }
}

int counter = 0, i;
do {

} while (i < numeroJoueurs);


for (i = 0; i < numeroJoueurs; i++) {
    if (joueur[i].numeroPost )
}

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
            case 4: Supprimer();
            break;
            case 5: Rechercher();
            break;
            case 6: Statistiques();
            break;
        }
    } while ((choix < 1 || choix > 7) || choix != 7);
    return 0;
}
