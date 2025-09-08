#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chainCharacters[25], lettre;
    int counter=0, i=0;
    printf("Veuillez enter une chaine de caracters: ");
    scanf("%s", chainCharacters);
    printf("Veuillez enter lettre: ");
    scanf(" %c", &lettre);
    for (i = 0; i < strlen(chainCharacters); i++) {
        if (chainCharacters[i] == lettre) {
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}
