#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float a, b, c, mg;
    printf("Veuillez enter a: ");
    scanf("%f", &a);
    printf("Veuillez enter a: ");
    scanf("%f", &b);
    printf("Veuillez enter a: ");
    scanf("%f", &c);
    mg =  pow(a * b * c, 1.0/3.0);
    printf("La moyenne geometrique egale: %.2f", mg);
    return 0;
}
