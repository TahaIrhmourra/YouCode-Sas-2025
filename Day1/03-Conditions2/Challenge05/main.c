#include <stdio.h>
#include <stdlib.h>

int main () {
    int budget, nombrePerson;
    printf("Veuillez enter votre budget: ");
    scanf("%d", &budget);
    printf("Veuillez enter nombre de personnes: ");
    scanf("%d", &nombrePerson);

    if (budget >= 1000) {
        printf("\nLe type de voyage le plus recommandee pour votre budget est un Voyage haut de gamme\n");
        if (nombrePerson > 2) printf("le plage est la destinations le plus recommandee\n");
        else printf("les villes sont les destinations les plus recommandee\n");
    } else if (budget >= 500 && budget < 1000) {
        printf("\nLe type de voyage le plus recommandee pour votre budget est un Voyage moyen\n");
        if (nombrePerson <= 2) printf("le montagne est la destinations le plus recommandee\n");
        else printf("les villes sont les destinations les plus recommandee\n");
    } else if (budget < 500) {
        printf("\nLe type de voyage le plus recommandee pour votre budget est un Voyage economique\nles villes sont les destinations les plus recommandee\n");
    }
    return 0;
}
