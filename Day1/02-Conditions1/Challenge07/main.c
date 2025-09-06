#include <stdio.h>
#include <stdlib.h>

int main () {
    char lettre;
    printf("Veuillez enter une lettre: ");
    scanf("%c", &lettre);
    if (lettre >= 65 && lettre <= 90) {
        printf("La lettre %c est Majuscule", lettre);
    } else {
        printf("La lettre %c est Miniscule", lettre);
    }
    return 0;
}
