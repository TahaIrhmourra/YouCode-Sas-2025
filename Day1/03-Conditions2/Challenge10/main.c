#include <stdio.h>
#include <stdlib.h>

int main () {
    int age, anneeCotisation, montantTotalEpargne, bonus = 0, nvMontant = 0, tranches = 0;
    printf("Veuillez enter votre age: ");
    scanf("%d", &age);
    printf("Veuillez enter le nombre des annees de cotisation: ");
    scanf("%d", &anneeCotisation);
    printf("Veuillez enter le montant total epargne: ");
    scanf("%d", &montantTotalEpargne);
    if (montantTotalEpargne > 50000) {
        nvMontant = montantTotalEpargne - 50000;
        tranches = nvMontant / 10000;
        bonus = 5 * tranches;
    }
    if (age >= 65) {
        if (anneeCotisation >= 30 && montantTotalEpargne >= 100000) {
            printf("Votre plan: complete avec pension elevee");
             printf("\nAvec une bonus de %d%%", bonus);
        } else if (anneeCotisation >= 20 && montantTotalEpargne >= 50000) {
            printf("Votre plan: partiel avec pension moyenne");
            printf("\nAvec une bonus de %d%%", bonus);
        }
    } else {
        printf("Plan epargne non encore disponible");
    }
    return 0;
}
