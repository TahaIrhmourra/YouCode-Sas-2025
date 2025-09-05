#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, counter, i;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    counter = 0;
    while (nombre != 0) {
        nombre /= 10;
        counter++;
    }
    printf("le nombre de chiffres dans cet entier est: %d", counter);
    return 0;
}
