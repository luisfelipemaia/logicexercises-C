#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int qntLados;
    float medidLado;

    printf("Entre com quantidade de lados: ");
    scanf("%d", &qntLados);

    printf("Entre com a medida do lado: ");
    scanf("%f", &medidLado);

    if(qntLados == 3) {
        printf("TRIANGULO de perimetro %.2f", medidLado * qntLados);
    } else if (qntLados == 4) {
        printf("QUADRADO de area %.2f", medidLado * medidLado);
    } else if (qntLados == 5) {
        printf("PENTAGONO");
    } else {
        printf("Poligono nao identificado");
    }

    return 0;
}