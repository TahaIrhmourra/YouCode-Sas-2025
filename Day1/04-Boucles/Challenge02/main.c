#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, factorielle, i;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    factorielle = 1;
    for (i = 1; i <= nombre; i++) {
        factorielle *= i ;
    }
    printf("la factorielle du nombre %d est: %d", nombre, factorielle);
    return 0;
}
