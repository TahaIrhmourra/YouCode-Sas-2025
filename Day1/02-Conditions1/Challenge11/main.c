#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int Vmin = 5, Vmax = 7;
    int val_aleatoire = rand() % (Vmax - Vmin + 1) + Vmin;
    switch (val_aleatoire) {
        case 1: printf("C'est Lundi");
        break;
        case 2: printf("C'est Mardi");
        break;
        case 3: printf("C'est Mercredi");
        break;
        case 4: printf("C'est Jeudi");
        break;
        case 5: printf("C'est Vendredi");
        break;
        case 6: printf("C'est Samedi");
        break;
        case 7: printf("C'est Dimanche");
        break;
    }
    return 0;
}
