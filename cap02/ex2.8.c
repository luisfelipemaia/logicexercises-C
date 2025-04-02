#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float n1;
    float n2;
    float n3;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("N3: ");
    scanf("%f", &n3);

    if(n3 > n2) {
        float t = n3;
        n3 = n2;
        n2 = t;
    }
    if(n2 > n1) {
        float t = n2;
        n2 = n1;
        n1 = t;
    }
    if(n2 < n3) {
        float t = n3;
        n3 = n2;
        n2 = t;
    }

    float soma = n1 + n2;

    printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);

    return 0;
}