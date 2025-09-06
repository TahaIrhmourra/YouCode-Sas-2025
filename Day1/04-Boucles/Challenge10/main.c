#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, i, resultat=0;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    for (i = 1; i <= nombre; i++) {
        resultat += i;
    }
    printf("Le resultat est: %d", resultat);
    return 0;
}
