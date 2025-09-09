#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    struct lesInfoPer {
        char nom[25];
        char prenom[25];
        int age;
        float note[5];
    };

    struct lesInfoPer info;
    int i=0;

    strcpy(info.nom, "Irhmourra");
    strcpy(info.prenom, "Taha");
    info.age = 23;

    info.note[0] = 12;
    info.note[1] = 4;
    info.note[2] = 18;
    info.note[3] = 20;
    info.note[4] = 2;

    printf("%s %s, %d est les note sont: ", info.nom, info.prenom, info.age);
    i=0;
    for (i = 0; i < 5; i++) {
        printf("%.2f ", info.note[i]);
    }

    return 0;
}
