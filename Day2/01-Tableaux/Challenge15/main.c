#include <stdio.h>
#include <stdlib.h>

int main () {
    int nT1, nT2, nTotal, i;
    printf("Veuillez enter le nombre des element dans le tableaux 1: ");
    scanf("%d", &nT1);
    int tableaux1[nT1];
    for (i = 0; i < nT1; i++) {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux1[i]);
    }
    printf("Veuillez enter le nombre des element dans le tableaux 2: ");
    scanf("%d", &nT2);
    int tableaux2[nT2];
    for (i = 0; i < nT2; i++) {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux2[i]);
    }
    nTotal = nT1 + nT2;
    int tfusion[nTotal];
    for(i = 0; i < nT1; i++) {
        tfusion[i] = tableaux1[i];
    }
    int j = 0;
    for(i = nT1; i < nTotal; i++) {
        tfusion[i] = tableaux2[j++];
    }
    printf("Les valeur du nouveau tableaux sont: ");
    for (i = 0; i < nTotal; i++) {
        printf("%d ", tfusion[i]);
    }
    return 0;
}
