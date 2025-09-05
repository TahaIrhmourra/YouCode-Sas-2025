#include <stdio.h>
#include <stdlib.h>

int main () {
    float V_km, D_sec;
    printf("Veuillez enter la vitesse en kilomètres par heure (km/h): ");
    scanf("%f", &V_km);
    D_sec = V_km  * 0.27778;
    printf("la en metres par seconde (m/s) est: %.2f", D_sec);
    return 0;
}
