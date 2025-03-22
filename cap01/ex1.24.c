#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float valorHora;
    int qtnAulas;
    float descInss;
    float desc;
    float salario;

    printf("Valor da hora/aula: ");
    scanf("%f", &valorHora);

    printf("Quantidade de aulas: ");
    scanf("%d", &qtnAulas);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &descInss);

    desc = (( valorHora * qtnAulas ) * descInss) / 100;
    salario = (valorHora * qtnAulas) - desc;

    printf("Salario Liquido: %.2f", salario);

    return 0;
}