#include <stdio.h>
#include <stdlib.h>

int main () {
    char lettre;
    printf("Veuillez enter une lettre: ");
    scanf("%c", &lettre);
    switch(lettre) {
        case 'a':
            printf("La lettre %c est une Voyelle", lettre);
            break;
        case 'e':
            printf("La lettre %c est une Voyelle", lettre);
            break;
        case 'i':
            printf("La lettre %c est une Voyelle", lettre);
            break;
        case 'o':
            printf("La lettre %c est une Voyelle", lettre);
            break;
        case 'u':
            printf("La lettre %c est une Voyelle", lettre);
            break;
        case 'y':
            printf("La lettre %c est une Voyelle", lettre);
            break;
        default:
            printf("La lettre %c n'est pas une Voyelle", lettre);
            break;
    }
    return 0;
}
