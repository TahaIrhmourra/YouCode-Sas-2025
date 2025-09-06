#include <stdio.h>
#include <stdlib.h>

int main () {
    int ageConducteur, typeVoiture, nombreAccident;
    printf("Veuillez saisir votre age: ");
    scanf("%d", &ageConducteur);
    printf("--------------\n");
    printf("1-Sportive");
    printf("\n2-Utilitaire");
    printf("\n3-Familiale\n");
    printf("Veuillez saisir le type de voiture : ");
    scanf("%d", &typeVoiture);
    printf("Veuillez saisir le nombre d'accidents: ");
    scanf("%d", &nombreAccident);
    float prime = 1000;

    if (ageConducteur < 25) prime *= 1.5;
    else if (ageConducteur >= 25 && ageConducteur < 65) prime;
    else prime *= 1.2;

    if (typeVoiture == 1) prime *= 2;
    else if (typeVoiture == 2) prime *= 1.2;
    else prime *= 1.1;

    if (nombreAccident > 1) prime += (prime * 30) / 100;

    printf("la prime d'assurance de votre voiture est: %.2f", prime);
    return 0;
}
