#include <stdio.h>
#include <stdlib.h>

int main () {
    int nombreV, i;
    float somme=0, moyenne=0;
    printf("Veuillez le nombre des valuer dans le tableaux: ");
    scanf("%d", &nombreV);
    i = 0;
    int tableaux[nombreV];
    do {
        printf("Veuillez enter la valeur %d: ", i + 1);
        scanf("%d", &tableaux[i]);
        i++;
    } while (i < nombreV);
    printf("-----------------\n");
    for (i = 0; i < nombreV; i++) {
       somme += tableaux[i];
    }
    moyenne = somme / nombreV;
    printf("La moyenne des valeur dans le tableaux est: %.2f", moyenne);
    return 0;
}
