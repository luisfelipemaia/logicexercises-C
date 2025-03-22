#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int largura;
    int altura;
    int perimetro;
    int area;

    printf("Valor da Largura: ");
    scanf("%d", &largura);

    printf("Valor da Altura: ");
    scanf("%d", &altura);

    perimetro = (2 * largura) + (2 * altura);
    area = largura * altura;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);
    return 0;
    
}