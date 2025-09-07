#include <stdio.h>
#include <stdlib.h>

int parite(int nombre) {
    if (nombre % 2 == 0) return 1;
    else return 0;
}
int main () {
    int nombre;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
     if (parite(nombre))
        printf("Le nombre %d est pair.\n", nombre);
    else
        printf("Le nombre %d est impair.\n", nombre);
    return 0;
}
