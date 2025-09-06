#include <stdio.h>
#include <stdlib.h>

int main () {
    int revenuAnnuel, statutFiscal;
    float impots;
    printf("Veuillez enter votre revenu(Annuel): ");
    scanf("%d", &revenuAnnuel);
    printf("---------\n");
    printf("1 - Celibataire\n");
    printf("2 - Marie\n");
    printf("3 - Chef de famille\n");
    printf("Veuillez enter votre statut: ");
    scanf("%d", &statutFiscal);
    if (statutFiscal == 1) {
        revenuAnnuel -= 1000;
    } else if (statutFiscal == 2) {
        revenuAnnuel -= 2000;
    } else {
        revenuAnnuel -= 3000;
    }
    if (revenuAnnuel <= 20000) {
        impots = (revenuAnnuel * 5) / 100;
    } else if (revenuAnnuel > 20000 && revenuAnnuel <= 50000) {
        impots = (revenuAnnuel * 10) / 100;
    } else {
        impots = (revenuAnnuel * 20) / 100;
    }
    printf("Les impots a payer est: %.2f", impots);
    return 0;
}
