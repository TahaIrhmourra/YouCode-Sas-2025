#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreLine, i, moitie1, moitie2, espace;
    printf("Veuillez enter le nombre de lines: ");
    scanf("%d", &nombreLine);
    int pointDebut = nombreLine;
    for (i = 0; i < nombreLine; i++) {
        for (espace = pointDebut; espace > 1; espace--) {
            printf(" ");
        }
        pointDebut--;
        for (moitie1 = pointDebut; moitie1 < nombreLine; moitie1++) {
            printf("*");
        }
        for (moitie2 = pointDebut + 1; moitie2 < nombreLine; moitie2++) {
            printf("*7");
        }
        printf("\n");
    }
    return 0;
}
