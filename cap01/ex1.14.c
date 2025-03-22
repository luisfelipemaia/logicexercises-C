#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float lado;
    float perimetro;
    float area;

    printf("Valor do Lado: ");
    scanf("%f", &lado);

    perimetro = lado * 4;
    area = lado * lado;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);

    return 0;
}