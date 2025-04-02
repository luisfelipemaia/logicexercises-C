#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float num;
    float metad;
    float trip;

    printf("Entre com um valor: ");
    scanf("%f", &num);

    if(num > 20) {
        metad = num / 2;
        printf("A metade de %.2f e %.2f", num, metad);
    } else {
        trip = num * 3;
        printf("O triplo de %.2f e %.2f", num, trip);
    }

    return 0;
}