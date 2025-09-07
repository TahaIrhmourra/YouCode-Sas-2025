#include <stdio.h>
#include <stdlib.h>

int main () {
    int n_base, n_exposant, resultat, i;
    printf("Veuillez enter un nombre de base: ");
    scanf("%d", &n_base);
    do {
        printf("Veuillez enter un nombre exposant: ");
        scanf("%d", &n_exposant);
    } while (n_exposant < 0);
    i = 1;
    resultat = 1;
    while (i <= n_exposant) {
        resultat *= n_base;
        i++;
    }
    printf("le resultat est: %d", resultat);
    return 0;
}
