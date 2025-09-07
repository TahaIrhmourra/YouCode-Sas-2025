#include <stdio.h>
#include <stdlib.h>

int main () {
    int i=0;
    float moyenne, nombreNote, sommeNote = 0.0;
    printf("Veuillez enter le nombre des note: ");
    scanf("%f", &nombreNote);
    int tailleTableau = nombreNote;
    int lesNotes[tailleTableau];
    do {
        printf("Veuillez enter la note %d: ", i + 1);
        scanf("%d", &lesNotes[i]);
        i++;
    } while (i < tailleTableau);
    for (i = 0; i < tailleTableau; i++) {
        if (lesNotes[i] % 10 == 0) {
            sommeNote += lesNotes[i] / 10;
        } else {
            sommeNote += lesNotes[i];
        }
    }
    moyenne = sommeNote / tailleTableau;
    printf("La moyenne est: %.2f", moyenne);
    return 0;
}
