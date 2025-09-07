#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main () {
    int randNum, randMin, randMaj, i;
    srand(time(NULL));
    char motPasse[13];
    for (i = 0; i < 12; i++) {
        randNum = rand() % (9 - 1 + 1) + 1;
        randMin = rand() % (122 - 97 + 1) + 97;
        randMaj = rand() % (90 - 65 + 1) + 65;
        int randChoix = rand() % (3 - 1 + 1) + 1;
        switch (randChoix) {
            case 1: motPasse[i] = randMaj;
            break;
            case 2: motPasse[i] = randMin;
            break;
            case 3: motPasse[i] = randNum + '0';
            break;
        }
    }
    printf("Votre mot de passe alratoire est: ");
    for (i = 0; i < 12; i++) {
        printf("%c", motPasse[i]);
    }
    return 0;
}
