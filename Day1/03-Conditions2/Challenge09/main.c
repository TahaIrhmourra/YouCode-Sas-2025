#include <stdio.h>
#include <stdlib.h>

int main () {
    float tempC;
    printf("Veuillez enter la temperature en Celisius: ");
    scanf("%f", &tempC);
    if (tempC < 0) {
        printf("L'etat de l'eau est solid");
    } else if (0 <= tempC && tempC < 100) {
        printf("L'etat de l'eau est liquide");
    } else {
        printf("L'etat de l'eau est gaz");
    }
    return 0;
}
