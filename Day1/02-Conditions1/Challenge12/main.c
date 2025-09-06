#include <stdio.h>
#include <stdlib.h>

int main () {
    int heu_ins1, heu_ins2, min_ins1, min_ins2, sec_ins1, sec_ins2;
    // utilisater va enter les valeur
    printf("veuillez enter les heures, les minutes et les seconds de l'instant 1: ");
    scanf("%d %d %d", &heu_ins1, &min_ins1, &sec_ins1);
    printf("veuillez enter les heures, les minutes et les seconds de l'instant 2: ");
    scanf("%d %d %d", &heu_ins2, &min_ins2, &sec_ins2);

    // comparer les heures
    if (heu_ins1 < heu_ins2) {
        printf("Le premier instant vient avant le deuxieme");
    } else if (heu_ins1 > heu_ins2) {
        printf("Le deuxieme instant vient avant le premier");
    } else {
        // comparer les minutes
        if (min_ins1 < min_ins2) {
            printf("Le premier instant vient avant le deuxieme");
    } else if (min_ins1 > min_ins2) {
        printf("Le deuxieme instant vient avant le premier");
        } else {
            // comparer les seconde
            if (sec_ins1 < sec_ins2) {
                printf("Le premier instant vient avant le deuxieme");
            } else if (sec_ins1 > sec_ins2) {
                printf("Le deuxieme instant vient avant le premier");
                // les meme instanst
            } else {
                printf("Il s'agit du meme instant");
            }
        }
    }
    return 0;
}
