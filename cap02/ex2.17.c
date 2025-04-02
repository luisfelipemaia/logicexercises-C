#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int num;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);

    switch ( num ) {
        case 2:
            printf("O valor fornecido foi %d.", num);
            break;
        case 4:
            printf("O valor fornecido foi %d.", num);
            break;
        case 6:
            printf("O valor fornecido foi %d.", num);
            break;
        case 8:
            printf("O valor fornecido foi %d.", num);
            break;
        default:
            printf("Valor invalido.");
            break;
    }

    return 0;
}