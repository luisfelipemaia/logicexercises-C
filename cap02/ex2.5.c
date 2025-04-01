#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int n1;
    int n2;
    int n3;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);

    if(n3 > n2) {
        int backup = n3;
        n3 = n2;
        n2 = backup;
    }
    if(n2 > n1) {
        int backup = n2;
        n2 = n1;
        n1 = backup;
    }
    if(n2 < n3) {
        int backup = n3;
        n3 = n2;
        n2 = backup;
    }

    printf("%d >= %d >= %d", n1, n2, n3);

    return 0;
}