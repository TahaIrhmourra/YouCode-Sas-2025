#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombre, chercher, present = 0, i;
    printf("Veuillez enter le nombre des element dans le tableaux: ");
    scanf("%d", &nombre);
    int tableaux[nombre];
    for (i = 0; i < nombre; i++) {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux[i]);
    }
    printf("Quelle element voullez vous cherche?: ");
    scanf("%d", &chercher);
    for (i = 0; i < nombre; i++) {
        if (tableaux[i] == chercher) {
            present = 1;
            break;
        }
    }
    if (present == 1) printf("Le nombre %d est present", chercher);
    else printf("le nombre non present");
    return 0;
}
