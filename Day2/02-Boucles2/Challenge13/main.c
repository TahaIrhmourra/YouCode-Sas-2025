#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, somme=0, i;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
        somme += nombre * i;
    }
    printf("La somme des produits est: %d", somme);
    return 0;
}
