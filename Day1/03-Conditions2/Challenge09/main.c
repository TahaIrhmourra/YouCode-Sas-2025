#include <stdio.h>
#include <stdlib.h>

int main () {
    float smig, bonus, salaire;
    int heures_sup, choix;
    smig = 3046.77;

    printf("Veuillez enter le nombre d'heures supplementaire: ");
    scanf("%d", &heures_sup);
    bonus = (17.10 * 1.5) * heures_sup;

    do {
        printf("Veuillez indice votre poste\n1-Senior\n2-Junior\n=> ");
        scanf("%d", &choix);
    } while (choix != 1 && choix != 2);

    switch(choix) {
        case 1: salaire = smig + bonus + ((smig * 20) / 100);
        break;
        case 2: salaire = smig + bonus + ((smig * 10) / 100);
        break;
    }

    printf("Votre Salaire est %.2f DH", salaire);
}
