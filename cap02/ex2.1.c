#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int num;
    
    printf("Entre com um numero: ");
    scanf("%d", &num);

    if(num % 2 != 0) {
        printf("O numero %d e impar.", num);
    } else {
        printf("O numero %d e par.", num);    
    }

    return 0;
}