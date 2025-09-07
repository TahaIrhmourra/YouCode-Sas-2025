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
    for (i = 0; i < tailleTableau - 1; i++) {
        for (j = i; j < tailleTableau - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < tailleTableau; i++) {
        printf("%d ", tableau[i]);
    }
    return 0;
}
