#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, nombre_inv;
    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nombre);
    nombre_inv = 0;
    while (nombre > 0) {
        nombre_inv = (nombre_inv * 10)+(nombre % 10);
        nombre /= 10;
    }
    printf("Le resultat: %d", nombre_inv);
    return 0;
}
