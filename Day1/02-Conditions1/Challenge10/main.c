#include <stdio.h>
#include <stdlib.h>

int main () {
    int jour, mois, annee;
    do {
        printf("Veuillez enter le jour: ");
        scanf("%d", &jour);
    } while (jour <= 0 || jour > 31);
    do {
        printf("Veuillez enter le mois: ");
        scanf("%d", &mois);
    } while (mois <= 0 || mois > 12);
    do {
        printf("Veuillez enter l'annee: ");
        scanf("%d", &annee);
    } while (annee < 2025);
    switch (mois) {
        case 1: printf("la Date: %d-Janvier-%d",jour, annee);
        break;
        case 2: printf("la Date: %d-Fevrier-%d",jour, annee);
        break;
        case 3: printf("la Date: %d-Mars-%d",jour, annee);
        break;
        case 4: printf("la Date: %d-Avril-%d",jour, annee);
        break;
        case 5: printf("la Date: %d-Mai-%d",jour, annee);
        break;
        case 6: printf("la Date: %d-Juin-%d",jour, annee);
        break;
        case 7: printf("la Date: %d-Juillet-%d",jour, annee);
        break;
        case 8: printf("la Date: %d-Aout-%d",jour, annee);
        break;
        case 9: printf("la Date: %d-Septembre-%d",jour, annee);
        break;
        case 10: printf("la Date: %d-Octobre-%d",jour, annee);
        break;
        case 11: printf("la Date: %d-Novembre-%d",jour, annee);
        break;
        case 12: printf("la Date: %d-Decembre-%d",jour, annee);
        break;
    }
    return 0;
}
