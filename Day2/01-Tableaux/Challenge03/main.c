#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreV, somme, i;
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
    somme = 0;
    for (i = 0; i < nombreV; i++) {
        somme += tableaux[i];
    }
    printf("La somme des valeurs dans le tableaux est: %d", somme);
    return 0;
}
