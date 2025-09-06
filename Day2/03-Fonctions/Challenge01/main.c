#include <stdio.h>
#include <stdlib.h>

int somme(int a,int b) {
    return a + b;
}

int main () {
    int a, b;
    printf("Veuillez enter la valeur A: ");
    scanf("%d", &a);
    printf("Veuillez enter la valeur B: ");
    scanf("%d", &b);
    printf("La somme est: %d", somme(a, b));
    return 0;
}
