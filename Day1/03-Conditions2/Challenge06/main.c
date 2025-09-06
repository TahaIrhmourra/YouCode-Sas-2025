#include <stdio.h>
#include <stdlib.h>

int main () {
    int consommation, typeUtilisateur, typeContrat;
    float facture;
    printf("Veuillez enter votre consommation du mois(kwh): ");
    scanf("%d", &consommation);
    printf("-----------\n");
    printf("1 - Residentiel\n");
    printf("2 - Commercial\n");
    printf("Veuillez choisisez le type d'utilisateur: ");
    scanf("%d", &typeUtilisateur);
    printf("-----------\n");
    printf("0 - Standard\n");
    printf("1 - Reduit\n");
    printf("Veuillez choisisez le type de contrat: ");
    scanf("%d", &typeContrat);
    if (typeUtilisateur == 1) {
        if (typeContrat == 0) {
            facture = 0.20 * consommation;
        } else {
            facture = 0.15 * consommation;
        }
    } else {
        if (typeContrat == 0) {
            facture = 0.30 * consommation;
        } else {
            facture = 0.25 * consommation;
        }
    }
    if (consommation > 500) {
        facture += (facture * 10) / 100;
        printf("Votre montant a payer est %.2f", facture);
    } else {
        printf("Votre montant a payer est %.2f", facture);
    }
    return 0;
}
