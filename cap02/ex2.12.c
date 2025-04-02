#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int h1;
    int h2;
    int m1;
    int m2;

    printf("Idade Homem 1: ");
    scanf("%d", &h1);

    printf("Idade Homem 2: ");
    scanf("%d", &h2);

    printf("Idade Mulher 1: ");
    scanf("%d", &m1);

    printf("Idade Mulher 2: ");
    scanf("%d", &m2);

    if(h1 > h2 && m1 > m2) {
        int hmv = h1;
        int hmn = h2;
        int mmv = m1;
        int mmn = m2;

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", hmv + mmn);
        printf("Idade homem mais novo * idade mulher mais velha: %d", hmn * mmv);

    } else if (h1 < h2 && m1 < m2) {
        int hmv = h2;
        int hmn = h1;
        int mmv = m2;
        int mmn = m1;

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", hmv + mmn);
        printf("Idade homem mais novo * idade mulher mais velha: %d", hmn * mmv);

    } else if (h1 > h2 && m1 < m2) {
        int hmv = h1;
        int hmn = h2;
        int mmv = m2;
        int mmn = m1;

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", hmv + mmn);
        printf("Idade homem mais novo * idade mulher mais velha: %d", hmn * mmv);
        
    } else {
        int hmv = h2;
        int hmn = h1;
        int mmv = m1;
        int mmn = m2;

        printf("Idade homem mais velho + idade mulher mais nova: %d\n", hmv + mmn);
        printf("Idade homem mais novo * idade mulher mais velha: %d", hmn * mmv);
    }

    return 0;
}