#include <stdio.h>
#include <stdlib.h>

int main () {
    int jour, i;
    printf("-- Les Jours de la somaine --\n");
    char jourSemain[7][10] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    for (i = 0; i < 7; i++) {
        printf("%d - %s\n", i + 1, jourSemain[i]);
    }
    do {
        printf("Veuillez Choisisez un jour: ");
        scanf("%d", &jour);
    } while (jour < 1 || jour > 7);

    for (i = jour - 1; i < 7; i++) {
        printf("%s ", jourSemain[i]);
    }
    return 0;
}
