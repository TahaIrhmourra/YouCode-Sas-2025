#include <stdio.h>
#include <stdlib.h>

int main () {
    int score, duree;
    float revenu;
    printf("Veuillez enter votre revenu annuel (en euros): ");
    scanf("%f", &revenu);
    printf("Veuillez enter votre score de credit (max 1000): ");
    scanf("%d", &score);
    printf("Veuillez enter la duree du pret (en annees): ");
    scanf("%d", &duree);
    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Vous etes eligible pour un pret");
    } else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf("Vous etes eligible pour un pret mais avec des conditions");
    } else {
        printf("Vous ne etes pas eligible pour un pret");
    }
    return 0;
}
