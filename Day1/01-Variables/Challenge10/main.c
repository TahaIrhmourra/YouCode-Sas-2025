#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float rayon, volume;
    printf("Veuillez enter la valeur du rayon: ");
    scanf("%f", &rayon);
    volume = (4.0/3.0) * M_PI * pow(rayon, 3);
    printf("Le volume de sphere est: %.2f", volume);
    return 0;
}
