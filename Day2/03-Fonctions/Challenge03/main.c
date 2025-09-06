#include <stdio.h>
#include <stdlib.h>

int valMax(int a,int b) {
    if (a > b) return a;
    else return b;
}

int main () {
    int a, b;
    printf("Veuillez enter la valeur A: ");
    scanf("%d", &a);
    printf("Veuillez enter la valeur B: ");
    scanf("%d", &b);
    printf("La valeur maximum est: %d", valMax(a, b));
    return 0;
}
