#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre;
    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nombre);
    if (nombre < 0) {
        printf("Le nombre %d est un nombre negatif", nombre);
    } else if (nombre > 0) {
        printf("Le nombre %d est un nombre positif", nombre);
    } else {
        printf("Le nombre egale a 0");
    }
    return 0;
}
