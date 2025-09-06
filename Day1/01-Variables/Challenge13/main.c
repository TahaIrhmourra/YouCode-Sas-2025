#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, ValOriginal, bin[8], i, j = 0;
    printf("Veuillez enter un nombre: ");
    scanf("%d", &nombre);
    ValOriginal = nombre;

    // int to bin
    for(i = 128; i > 0; i = i/2) {
        if (nombre >= i) {
            bin[j] = 1;
            nombre -= i;
        } else {
            bin[j] = 0;
        }
        j++;
    }
    printf("La valeur %d en binaire est: ", ValOriginal);
    for (i = 0; i < 8; i++) {
        printf("%d", bin[i]);
    }
    printf("\n");

    // int to hex
    printf("La valeur %d en hexadecimal est: %x, %X", ValOriginal, ValOriginal, ValOriginal);
    return 0;
}
