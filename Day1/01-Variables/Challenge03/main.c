#include <stdio.h>
#include <stdlib.h>

int main () {
    float D_km, D_yard;
    printf("Veuillez enter la distance en kilometres: ");
    scanf("%f", &D_km);
    D_yard = D_km * 1093.61;
    printf("la distance en yards est: %.2f", D_yard);
    return 0;
}
