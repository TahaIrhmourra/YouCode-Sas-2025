#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    struct lesInfoPer {
        char nom[25];
        char prenom[25];
        int age;
    };

    struct lesInfoPer info;
    strcpy(info.nom, "Irhmourra");
    strcpy(info.prenom, "Taha");
    info.age = 23;

    printf("%s %s, %d", info.nom, info.prenom, info.age);

    return 0;
}
