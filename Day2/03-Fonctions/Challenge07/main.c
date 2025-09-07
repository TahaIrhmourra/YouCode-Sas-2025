#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverse(char *chainCaracteres) {
    char chainInverse[25];
    int i, taille = strlen(chainCaracteres);
    for (i = 0; i < taille; i++) {
        chainInverse[i] = chainCaracteres[taille - 1 - i];
    }
    printf("L'inversion de chaine %s est: %s", chainCaracteres ,chainInverse);
}
int main () {
    char chainCaracteres[25];
    printf("Veuillez enter une chain de caractere: ");
    scanf("%s", chainCaracteres);
    inverse(chainCaracteres);
    return 0;
}
