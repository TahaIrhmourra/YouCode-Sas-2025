#include <stdio.h>
#include <stdlib.h>

int Factorielle(int nombre) {
    int factorielle = 1, i;
    for (i = 1; i <= nombre; i++) {
        factorielle *= i ;
    }
    return factorielle;
}

int main () {
    int nombre;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    printf("la factorielle du nombre %d est: %d",nombre, Factorielle(nombre));
    return 0;
}
