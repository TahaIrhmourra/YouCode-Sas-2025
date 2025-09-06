#include <stdio.h>
#include <stdlib.h>

int main () {
    int val1 , val2, result;
    printf("Veuillez enter la valeur 1: ");
    scanf("%d", &val1);
    printf("veuillez enter la valeur 2: ");
    scanf("%d", &val2);
    if (val1 == val2) {
        result = (val1 + val2) * 3;
    } else {
        result = val1 + val2;
    }
    printf("le resultat est %d", result);
    return 0;
}
