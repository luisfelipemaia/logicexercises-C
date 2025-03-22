#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float prod;
    float desc;
    float preco;

    printf("Valor do produto: ");
    scanf("%f", &prod);

    desc = (prod * 9) / 100;
    preco = prod - desc;

    printf("Preco de venda com 9%% de desconto: %.2f", preco);

    return 0;
}