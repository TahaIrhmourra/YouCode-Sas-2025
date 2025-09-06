#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreV, max, i;
    printf("Veuillez le nombre des valuer dans le tableaux: ");
    scanf("%d", &nombreV);
    i = 0;
    int tableaux[nombreV];
    do {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux[i]);
        i++;
    } while (i < nombreV);
    printf("\n-----------------\n");
    max = 0;
    for (i = 0; i < nombreV - 1; i++) {
        if (tableaux[i] > tableaux[i + 1]) {
            tableaux[i + 1] = tableaux[i];
            max = tableaux[i + 1];
        }
    }
    printf("La valeurs maximum dans le tableaux est: %d", max);
    return 0;
}
