#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, i, j, nPremier;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    printf("Les nombres premier sont: ");
    for (i = 2; i <= nombre; i++) {
        nPremier = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                nPremier = 0;
                break;
            }
        }
        if (nPremier == 1) printf("%d ", i);
    }
    return 0;
}
