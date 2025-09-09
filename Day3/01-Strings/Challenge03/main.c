#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char chaineChars1[100], chaineChars2[100], i=0, counter=0;
    printf("Veuillez enter la chaine de caracteres1: ");
    scanf("%s", chaineChars1);
    printf("Veuillez enter la chaine de caracterese: ");
    scanf("%s", chaineChars2);
    printf("La chaines de caracteres concatene est: %s\n", strcat(chaineChars1, chaineChars2));
    return 0;
}
