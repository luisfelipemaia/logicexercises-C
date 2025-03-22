#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float num1;
    float num2;

    printf("Primeiro Numero: ");
    scanf("%f", &num1);

    printf("Segundo Numero: ");
    scanf("%f", &num2);

    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);

    return 0;
}