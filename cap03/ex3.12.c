#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int n1;
    int n2;
    int pares;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    if(n1 < n2) {
        for(int i = n1; i <= n2; i++) {
            if(i % 2 == 0) {
                pares++;
            }
        }

        printf("Numeros pares entre %d e %d: %d", n1, n2, pares);
    } else {
        for(int i = n2; i >= n2; i--) {
            if(i % 2 == 0) {
                pares++;
            }
        }

        printf("Numeros pares entre %d e %d: %d", n2, n1, pares);
    }

    return 0;
}