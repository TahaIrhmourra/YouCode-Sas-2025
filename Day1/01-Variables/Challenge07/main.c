#include <stdio.h>
#include <stdlib.h>

int main () {
    float note1, note2, note3, moyenne_ponderee;
    printf("Veuillez enter la 1ere note: ");
    scanf("%f", &note1);
    printf("Veuillez enter la 2eme note: ");
    scanf("%f", &note2);
    printf("Veuillez enter la 3eme note: ");
    scanf("%f", &note3);
    moyenne_ponderee = ((note1 * 2) + (note2 * 3) + (note3 * 5)) / 10;
    printf("La Moyenne ponderee est: %.2f", moyenne_ponderee);
    return 0;
}
