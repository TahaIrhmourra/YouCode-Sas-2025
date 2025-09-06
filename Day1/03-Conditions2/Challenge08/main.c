#include <stdio.h>
#include <stdlib.h>

int main () {
    int age, historiqueMedical;
    printf("Veuillez enter votre age: ");
    scanf("%d", &age);
    printf("-------------\n");
    printf("0 -  aucun probleme\n");
    printf("1 -  probleme mineur\n");
    printf("2 -  probleme majeur\n");
    printf("Veuillez enter votre historique medical: ");
    scanf("%d", &historiqueMedical);
    if (age >= 30) {
        if (historiqueMedical == 0) printf("type de couverture: Base");
        else if (historiqueMedical == 1) printf("type de couverture: Etendu");
        else printf("type de couverture: Etendu, Supplementaire");
    } else {
        printf("type de couverture: Base");
    }
    return 0;
}
