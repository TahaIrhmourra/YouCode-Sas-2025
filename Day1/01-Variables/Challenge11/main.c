#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float longueur, largeur, surface;
    printf("Veuillez enter la longueur et la largeur du rectangle: ");
    scanf("%f %f", &longueur, &largeur);
    surface = longueur * largeur;
    printf("La surface de rectangle est: %.2f", surface);
    return 0;
}
