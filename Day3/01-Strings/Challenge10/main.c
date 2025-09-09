#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chainCharacters[100], sousTitre[25];
    int i=0, taille1, taille2;
    printf("Veuillez enter une chaine de caracters: ");
    fgets(chainCharacters, sizeof(chainCharacters), stdin);
    printf("Veuillez enter une chaine de caracters: ");
    fgets(sousTitre, sizeof(sousTitre), stdin);

    taille1 = strlen(chainCharacters);
    taille2 = strlen(sousTitre);

    if (chainCharacters[taille1 - 1] == '\n') chainCharacters[taille1 - 1] = '\0';
    if (sousTitre[taille2 - 1] == '\n') sousTitre[taille2 - 1] = '\0';

    int trouver = 0;
    if (strstr(chainCharacters, sousTitre) != NULL) {
            printf("Le sous titre est trouver");
            trouver = 1;
    }
    if (trouver == 0) printf("Le sous titre est non trouver");
    return 0;
}
