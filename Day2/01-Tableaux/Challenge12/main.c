#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreV, i;
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
    printf("Les valeur Paire dans ce tableaux sont: [ ");
    for (i = 0; i < nombreV; i++) {
        if (tableaux[i] % 2 == 1) {
            continue;
        }
        printf("%d ", tableaux[i]);
    }
    printf("]");
    return 0;
}
