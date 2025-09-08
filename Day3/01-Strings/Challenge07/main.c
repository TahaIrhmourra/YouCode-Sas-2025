#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chaineChars[25];
    printf("Veuillez enter une chaine de caracteres: ");
    fgets(chaineChars, sizeof(chaineChars), stdin);

    printf("Votre chaine de caracteres est: %s", strupr (chaineChars));
    return 0;
}
