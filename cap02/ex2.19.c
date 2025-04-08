#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    char menu;
    float c;
    float f;

    printf("Escolha uma operacao de acordo com o menu:\n   C) Celsius -> Fahrenheit;\n   F) Fahrenheit -> Celsius.\nOpcao: ");
    scanf("%s", &menu);

    switch (menu) {
        case 'C':
            printf("Entre com a temperatura em graus Celsius: ");
            scanf("%f", &c);

            f = 1.8 * c + 32;
            
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", c, f);
            break;
        case 'F':
            printf("Entre com a temperatura em graus Fahrenheit: ");
            scanf("%f", &f);

            c = (f - 32) / 1.8;
        
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", f, c);
            break;
        default:
            printf("Opcao invalida!");
            break;
    }

    return 0;
}