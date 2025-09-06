#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float xa, ya, xb, yb, pa, pb, m, b, y;
    printf("Veuillez enter A(x,y): ");
    scanf("%f %f", &xa, &ya);
    printf("Veuillez enter B(x,y): ");
    scanf("%f %f", &xb, &yb);
    printf("Veuillez enter P(x,y): ");
    scanf("%f %f", &pa, &pb);
    m = (yb - ya) / (xb - xa);
    b = ya - (m * xa);
    y = (m * pa) + b;
    if (y == pb) {
        printf("la point se trouve sur le segment");
    } else {
        printf("la point se ne trouve pas sur le segment");
    }
    return 0;
}
