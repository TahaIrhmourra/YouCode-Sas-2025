#include <stdio.h>
#include <stdlib.h>

int main () {
    char prenom[20], nom[20], sexe[20], adresse_email[20];
    int age;

    printf("Veuillez enter votre prenom: ");
    scanf("%s", &prenom);
    printf("Veuillez enter votre nom: ");
    scanf("%s", &nom);
    printf("Veuillez enter votre age: ");
    scanf("%d", &age);
    printf("Veuillez enter votre sexe(M/F): ");
    scanf("%s", &sexe);
    printf("Veuillez enter votre Adresse email: ");
    scanf("%s", &adresse_email);

    printf("Votre prenom est: %s\n", prenom);
    printf("Votre nom est: %s\n", nom);
    printf("Votre age est: %d\n", age);
    printf("Votre sexe est: %s\n", sexe);
    printf("Votre adresse email est: %s\n", adresse_email);
    return 0;
}
