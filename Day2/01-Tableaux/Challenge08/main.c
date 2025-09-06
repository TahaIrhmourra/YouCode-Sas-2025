#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreV, i;
    printf("Veuillez le nombre des valuer dans le tableaux original: ");
    scanf("%d", &nombreV);
    i = 0;
    int tableaux[nombreV];
    do {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux[i]);
        i++;
    } while (i < nombreV);
    printf("\n-----------------\n");
    int tableauxCopie[nombreV];
    int j = 0;
    for (i = 0; i <= nombreV; i++) {
        tableauxCopie[j] = tableaux[i];
        j++;
    }
    printf("\nLes valeur dans le tableaux original sont: [ ");
    for (i = 0; i < nombreV; i++) {
        printf("%d ", tableaux[i]);
    }
    printf("]");
    printf("\n");
    printf("Les valeur dans le tableaux copie sont: [ ");
    for (i = 0; i < nombreV; i++) {
        printf("%d ", tableauxCopie[i]);
    }
    printf("]");
    printf("\n");
    return 0;
}
