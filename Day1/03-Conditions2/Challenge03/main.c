#include <stdio.h>
#include <stdlib.h>

int main () {
    int jourAccordes, jourUtilises, status, jourRestants;
    printf("Veuillez enter les nombre des jour accordes: ");
    scanf("%d", &jourAccordes);
    printf("Veuillez enter les nombre des jour utilises: ");
    scanf("%d", &jourUtilises);
    printf("--------------\n");
    printf("0 - pour temps partiel\n");
    printf("1 - pour temps plein\n");
    printf("Veuillez enter Votre statue: ");
    scanf("%d", &status);
    switch (status) {
        case 0: jourRestants = (jourAccordes / 2) - jourUtilises;
                printf("%d jour restants\n", jourRestants);
        break;
        case 1: jourRestants = jourAccordes - jourUtilises;
                printf("%d jour restants\n\n", jourRestants);
        break;
    }
    if (jourUtilises > jourAccordes) printf("Alers: Vous avez depaser les jour accordes\n");
    return 0;
}
