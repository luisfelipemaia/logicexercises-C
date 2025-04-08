#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    for(int i = 0; i < 51; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}