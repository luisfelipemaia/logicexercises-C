#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float n1;
    float n2;
    char menu;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N1: ");
    scanf("%f", &n1);

    printf("Escolha uma operacaode acordo com o menu:\n   +) Adicao;\n   -) Subtracao;\n   *) Multiplicacao;\n   /) Divisao.\nOperacao: ");
    scanf("%c", &menu);

    switch (menu) {
        case '+':
            printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2f + %.2f = %.2f", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2f + %.2f = %.2f", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.2f + %.2f = %.2f", n1, n2, n1 / n2);
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}