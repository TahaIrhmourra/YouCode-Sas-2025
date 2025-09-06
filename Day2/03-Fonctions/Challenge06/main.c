#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int nombre) {
    int u1, u0, f, i;
    u0 = 0;
    u1 = 1;
    for (i = 2; i <= nombre; i++) {
        f = u1 + u0;
        u0 = u1;
        u1 = f;
        printf("F(%d) = F(%d) + F(%d) = %d\n", i, i - 1, i - 2, f);
    }
}
int main () {
    int nombre;
    printf("Veuillez enter un nombre (n>2): ");
    scanf("%d", &nombre);
    Fibonacci(nombre);
    return 0;
}
