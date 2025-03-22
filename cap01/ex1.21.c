#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int num;
    int ant;
    int suc;

    printf("Forneca um numero inteiro: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("Sucessor de %d: %d\n", num, suc);
    printf("Antecessor de %d: %d", num, ant);

    return 0;
}