#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, i, somme=0;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    for (i = 1; i <= nombre; i++) {
        somme += i;
    }
    printf("La somme est: %d", somme);
    return 0;
}
