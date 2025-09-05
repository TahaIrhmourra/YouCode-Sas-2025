#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, remplacement, NValeur, i;
    printf("Veuillez enter le nombre des element dans le tableaux: ");
    scanf("%d", &nombre);
    int tableaux[nombre];
    for (i = 0; i < nombre; i++) {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux[i]);
    }
    printf("Quelle element voullez vous remplacer?: ");
    scanf("%d", &remplacement);
    for (i = 0; i < nombre; i++) {
        if (tableaux[i] == remplacement) {
            printf("Quelle est la nouvelle valuer: ");
            scanf("%d", &NValeur);
            tableaux[i] = NValeur;
            break;
        }
    }
    printf("Les valeur de tableaux sont: ");
    for (i = 0; i < nombre; i++) {
        printf("%d ", tableaux[i]);
    }
    return 0;
}
