#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre;
    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nombre);
    if (nombre % 2 == 0) {
        printf("Le nombre %d est un nombre Paire", nombre);
    } else {
        printf("Le nombre %d est un nombre Impaire", nombre);
    }
    return 0;
}
