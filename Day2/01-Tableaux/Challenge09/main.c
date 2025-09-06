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
    int tableauxInv[nombreV];
    int j = 0;
    for (i = nombreV - 1; i >= 0; i--) {
        tableauxInv[j] = tableaux[i];
        j++;
    }
    printf("Les valeur dans le tableaux inverse sont: [ ");
    for (i = 0; i < nombreV; i++) {
        printf("%d ", tableauxInv[i]);
    }
    printf("]");
    return 0;
}
