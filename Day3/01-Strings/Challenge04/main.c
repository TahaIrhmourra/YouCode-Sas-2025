#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chaineChars1[100], chaineChars2[100];
    printf("Veuillez enter la chaine de caracteres1: ");
    scanf("%s", chaineChars1);
    printf("Veuillez enter la chaine de caracterese: ");
    scanf("%s", chaineChars2);
    if (strcmp(chaineChars1, chaineChars2) == 0) {
        printf("Les chaines sont egales");
    } else {
        printf("Les chaines sont differentes");
    }
    return 0;
}
