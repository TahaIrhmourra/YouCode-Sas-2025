#include <stdio.h>
#include <stdlib.h>

int main () {
    float tempC;
    printf("Veuillez enter la temperature en Celsius: ");
    scanf("%f", &tempC);
    if (tempC < 0) {
        printf("L'etat de l'eau est solide");
    } else if (tempC >= 0 && tempC < 100) {
        printf("L'etat de l'eau est liquide");
    } else {
        printf("L'etat de l'eau est gaz");
    }
    return 0;
}
