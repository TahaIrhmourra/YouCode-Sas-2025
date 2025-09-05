#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, somme, i;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    somme = 0;
    for (i = 1; i <= nombre; i++) {
        somme += i;
    }
    printf("La somme est: %d", somme);
    return 0;
}
