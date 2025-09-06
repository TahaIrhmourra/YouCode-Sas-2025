#include <stdio.h>
#include <stdlib.h>

int main () {
    char caractere;
    printf("Veuillez enter un caractere: ");
    scanf("%c", &caractere);
    if ((caractere >= 65 && caractere <= 90) || (caractere >= 97 && caractere <= 122)) {
        if (caractere >= 65 && caractere <= 90) {
            printf("Le caractere %c est une lettre Majuscule", caractere);
        } else {
            printf("Le caractere %c est une lettre Miniscule", caractere);
        }
    } else {
       printf("Le caractere %c n'est pas une lettre", caractere);
    }
    return 0;
}
