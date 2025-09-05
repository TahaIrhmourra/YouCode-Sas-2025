#include <stdio.h>
#include <stdlib.h>

int main () {
    float A, B;
    int op;
    printf("Veuillez enter la valeur de A: ");
    scanf("%f", &A);
    printf("Veuillez enter la valeur de B: ");
    scanf("%f", &B);

    do {
        printf("\n--Menu des operations--\n ");
        printf("\n1 - L'addition\n");
        printf("2 - La soustraction\n");
        printf("3 - La multiplication\n");
        printf("4 - La division\n");
        printf("\n--Veuillez choisisez une operation: ");
        scanf("%d", &op);
    } while (op < 1 && op > 4);

    switch(op) {
        case 1 : printf("Le resultat est: %.2f", A + B);
        break;
        case 2 : printf("Le resultat est: %.2f", A - B);
        break;
        case 3 : printf("Le resultat est: %.2f", A * B);
        break;
        case 4 : if (B != 0) printf("Le resultat est: %.2f", A / B);
                 else printf("Veuillez entre un nombre superieur a 0");
        break;
    }
    return 0;
}
