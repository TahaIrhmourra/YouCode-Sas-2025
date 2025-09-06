#include <stdio.h>
#include <stdlib.h>

int main () {
    float note1, note2, note3, moyenne;
    printf("Veuillez enter les note1, 2 et 3: ");
    scanf("%f %f %f", &note1, &note2, &note3);
    moyenne = (note1 + note2 + note3) / 3.0;
    if (moyenne < 10) {
        printf("La mention obtenue est: recale");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("La mention obtenue est: passable");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("La mention obtenue est: assez bien");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("La mention obtenue est: bien");
    } else {
        printf("La mention obtenue est: tres bien");
    }
    return 0;
}
