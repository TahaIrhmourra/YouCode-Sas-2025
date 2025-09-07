#include <stdio.h>
#include <stdlib.h>

int main () {
    char chaineChars[100], i=0, counter=0;
    printf("Veuillez enter une chaine de caracteres: ");
    fgets(chaineChars, sizeof(chaineChars), stdin);
    do {
        counter++;-
        i++;
    } while(chaineChars[i] != 0);
    printf("La longueur de la chaine est: %d", counter - 1);
    return 0;
}
