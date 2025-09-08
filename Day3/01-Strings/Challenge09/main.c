#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chainCharacters[100], chainSansEspace[100], lettre[25];
    int i=0, taille;
    printf("Veuillez enter une chaine de caracters: ");
    fgets(chainCharacters, sizeof(chainCharacters), stdin);
    taille = strlen(chainCharacters);
    int j=0;
    for (i = 0; i < taille; i++) {
        if (chainCharacters[i] == ' ') {
            continue;
        } else {
            chainSansEspace[j] = chainCharacters[i];
            j++;
        }
    }
    printf("chain du characters sans espace: %s", chainSansEspace);
    return 0;
}
