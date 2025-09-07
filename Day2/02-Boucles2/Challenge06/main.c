#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, i;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    printf("la factorielle du nombre %d sont: ", nombre);
    for (i = 1; i <= nombre; i++) {
        if (nombre % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
