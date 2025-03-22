#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int anoNasc;
    int anoAtual;
    int idade;

    printf("Ano de Nascimento: ");
    scanf("%d", &anoNasc);

    printf("Ano Atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasc;

    printf("Idade aproximada: %d anos", idade);

    return 0;
}