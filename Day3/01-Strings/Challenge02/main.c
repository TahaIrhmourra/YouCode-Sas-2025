#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chaineChars[100], i=0, counter=0;
    printf("Veuillez enter une chaine de caracteres: ");
    fgets(chaineChars, sizeof(chaineChars), stdin);
    int taille = strlen(chaineChars);
    if (chaineChars[taille - 1] = '\n') chaineChars[taille - 1] = '\0';
    taille = strlen(chaineChars);
    printf("La longueur de la chaine est: %d", taille);
    return 0;
}
