#include <stdio.h>
#include <stdlib.h>

int main ( void )  {
    int lado;
    int perimetro;
    int area;
    
    printf("Valor do Lado: ");
    scanf("%d", &lado);

    perimetro = 4 * lado;
    area = lado * lado;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);
    return 0;
}