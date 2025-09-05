#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreV, produit, i;
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
    produit = 1;
    for (i = 0; i < nombreV; i++) {
        produit *= tableaux[i];
    }
    printf("Le produit des valeurs dans le tableaux est: %d", produit);
    return 0;
}
