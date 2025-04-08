#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int a = 1;
    int b = 1;
    int termo = 18;

    printf("%d %d ", a, b);

    for(int i = 0; i < termo; i++) {
        b = a + b;
        a = b - a;

        printf("%d ", b);
    }

    return 0;
}
