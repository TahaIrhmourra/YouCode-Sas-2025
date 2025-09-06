#include <stdio.h>
#include <stdlib.h>

int main () {
    int score, anciennete, recompenses, score_final;
    printf("Veuillez enter votre score de preformance: ");
    scanf("%d", &score);
    printf("Veuillez enter votre anciennete (en annees): ");
    scanf("%d", &anciennete);
    printf("0 - pour aucune\n");
    printf("1 - pour une\n");
    printf("2 - pour deux ou plus\n");
    printf("Veuillez enter le nombre des recompenses recues: ");
    scanf("%d", &recompenses);
    if (recompenses == 1) {
        score_final = score + (score * 10) / 100;
        printf("\nVotre score final est: %d, est ", score_final);
    } else if (recompenses >= 2) {
        score_final = score + (score * 20) / 100;
        printf("\nVotre score final est: %d, est ", score_final);
    } else {
        score_final = score;
        printf("\nVotre score final est: %d, est ", score_final);
    }
    if (score_final >= 90 && anciennete >= 5) {
        printf("Votre preformance est Excellente");
    } else if (score_final >= 75 && anciennete >= 3) {
        printf("Votre preformance est Bonne\n");
    } else if (score_final >= 50 && anciennete < 3) {
        printf("Votre preformance est Satisfaisante");
    } else {
        printf("Votre preformance est Insuffisante");
    }
    return 0;
}
