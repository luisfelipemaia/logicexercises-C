#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int num1;
    int num2;
    int media;

    printf("Primeiro numero: ");
    scanf("%d", &num1);

    printf("Segundo numero: ");
    scanf("%d", &num2);

    media = (num1 + num2) / 2;

    printf("Media aritmetica: %d", media);

    return 0;
}