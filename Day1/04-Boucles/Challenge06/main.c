#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, counter = 1, i;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    for (i = 1; counter <= nombre; i++) {
        if (i % 2 == 1) {
            continue;
        } else {
            printf("%d ", i);
            counter++;
        }
    }
    return 0;
}
