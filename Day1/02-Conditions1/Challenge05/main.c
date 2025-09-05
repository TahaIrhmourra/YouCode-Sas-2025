#include <stdio.h>
#include <stdlib.h>

int main () {
    int annee, choix, resultat;
    printf("Veuillez entrer une annee: ");
    scanf("%d", &annee);
    // Menu de convertir
    menu_conv :
    printf("\n--- Menu de convertir ---\n");
    printf("1 - annee -> mois\n");
    printf("2 - annee -> jours\n");
    printf("3 - annee -> heures\n");
    printf("4 - annee -> minutes\n");
    printf("5 - annee -> seconds\n\n");
    // choix
    printf("Veuillez choisir une operation: ");
    scanf("%d", &choix);
    switch(choix) {
        // Annee => Mois
        case 1: resultat = annee * 12;
        printf("\n%d Annee => %d Mois", annee, resultat);
        break;
        // Annee => Jours
        case 2: resultat = annee * 365;
        printf("\n%d Annee => %d Jours", annee, resultat);
        break;
        // Annee => Heures
        case 3: resultat = (annee * 365) * 24;
        printf("\n%d Annee => %d Heures", annee, resultat);
        break;
        // Annee => Minutes
        case 4: resultat = ((annee * 365) * 24) * 60;
        printf("\n%d Annee => %d Minutes", annee, resultat);
        break;
        // Annee => Secondes
        case 5: resultat = (((annee * 365) * 24) * 60) * 60;
        printf("\n%d Annee => %d Secondes", annee, resultat);
        break;
        default: goto menu_conv;
    }
    return 0;
}
