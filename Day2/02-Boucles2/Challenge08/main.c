#include <stdio.h>
#include <stdlib.h>

int main () {
    int tailleTableau, i=0, j=0, nombreCherche;
    printf("Veuillez enter le nombre des valeur dans le tableau: ");
    scanf("%d", &tailleTableau);
    int tableau[tailleTableau];
    do {
        printf("Veuillez entrer la valeur %d: ", i + 1);
        scanf("%d", &tableau[i]);
        i++;
    } while (i < tailleTableau);
    for (i = 0; i < tailleTableau; i++) {
        for (j = i + 1; j < tailleTableau; j++) {
            if (tableau[i] > tableau[j]) {
                int temp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;
            }
        }
    }
    printf("Veuillez enter le nombre a chercher: ");
    scanf("%d", &nombreCherche);
    int start = 0;
    int end = tailleTableau - 1;
    while (start <= end) {
        int middle = (start + end) / 2;
        if (tableau[middle] == nombreCherche) {
            printf("Le nombre a chercher est: %d", tableau[middle]);
            break;
        }
        if (nombreCherche < tableau[middle]) end = middle - 1;
        if (nombreCherche > tableau[middle]) start = middle + 1;
    }
    return 0;
}
