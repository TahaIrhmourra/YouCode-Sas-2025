#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int a, b, c;
    float delta, x1, x2;
    printf("Veuillez enter les valeur a, b et c: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = pow(b, 2) - (4.0 * a * c);
    if (delta < 0)  {
        printf("Aucun solution pour cette equations");
    } else if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf("La premier solution egale: %.2f", x1);
    } else {
        x1 = (-b - sqrt(delta)) / (2.0 * a);
        x2 = (-b + sqrt(delta)) / (2.0 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f", x2);
    }
    return 0;
}
