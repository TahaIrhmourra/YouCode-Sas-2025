#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, nombreInv = 0;
    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nombre);
    int nombreOriginal = nombre;
    do {
        nombreInv = (nombreInv * 10) + (nombre % 10);
        nombre /= 10;
    } while (nombre != 0);
    printf("l'ordre inverse de chiffre %d est: %d", nombreOriginal ,nombreInv);
    return 0;
}
