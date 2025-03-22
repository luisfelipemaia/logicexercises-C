#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float b;
    float h;
    float A;

    printf("Valor da base: ");
    scanf("%f", &b);

    printf("Valor da altura: ");
    scanf("%f", &h);

    A = (b * h) / 2;

    printf("Area = %.2f", A);

    return 0;
}