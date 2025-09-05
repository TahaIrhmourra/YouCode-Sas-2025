#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float x1, x2, y1, y2, z1, z2, distance;

    printf("Veuillez enter les valeur de x1, y1, z1: ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("Veuillez enter les valeur de x2, y2, z3: ");
    scanf("%f %f %f", &x2, &y2, &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("La distance egale a: %.2f", distance);
    return 0;
}
