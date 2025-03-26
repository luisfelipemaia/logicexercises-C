#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1; 
    int n2; 
    int n3;

    printf("N1: ");
    scanf("%d", &n1);
    
    printf("N2: ");
    scanf("%d", &n2);
    
    printf("N3: ");
    scanf("%d", &n3);

    if (n1 > n2) {
        int mude = n1;
        n1 = n2;
        n2 = mude;
    }
    if (n2 > n3) {
        int mude = n2;
        n2 = n3;
        n3 = mude;
    }
    if (n1 > n2) {
        int mude = n1;
        n1 = n2;
        n2 = mude;
    }

    printf("Ordem crescente: %d <= %d <= %d", n1, n2, n3);

    return 0;
}