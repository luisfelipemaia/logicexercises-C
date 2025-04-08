#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int i;

    printf("Forneca um numero maior ou igual a zero: ");
    scanf("%d", &i);

    if(i > 0) {
        for(i; i >= 0; i--){
            printf("%d ", i);
        }
    } else {
        printf("Valor incorreto (negativo)");
    }

    return 0;
}