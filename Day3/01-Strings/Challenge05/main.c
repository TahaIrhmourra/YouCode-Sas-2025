#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chaineChars[25];
    printf("Veuillez enter une chaine de caracteres: ");
    scanf("%s", chaineChars);

    printf("Votre chaine de caracteres est en miniscule: %s", strrev (chaineChars));
    return 0;
}
