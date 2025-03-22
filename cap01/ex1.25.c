#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float C;
    float F;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", F, C);

    return 0;
}