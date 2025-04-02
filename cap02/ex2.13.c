#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float av1;
    float av2;
    float opt;
    float m;

    printf("Nota Av. 1: ");
    scanf("%f", &av1);

    printf("Nota Av. 2: ");
    scanf("%f", &av2);

    printf("Nota Optativa: ");
    scanf("%f", &opt);

    if(av1 > av2) {
        if (av2 > opt) {
            m = (av1 + av2) / 2;
        } else {
            float t = av2;
            av2 = opt;
            opt = t;
            m = (av1 + av2) / 2;
        }
    } else {
        float t = av1;
        av1 = av2;
        av2 = t;
        if(av2 < opt) {
            float t = av2;
            av2 = opt;
            opt = t;
            m = (av1 + av2) / 2;
        } else {
            m = (av1 + av2) / 2;
        }
    }

    if(m >= 6.0) {
        printf("Media: %.2f\nAprovado!", m);
    } else if(m < 6.0 && m >= 4.0) {
        printf("Media: %.2f\nExame.", m);
    } else {
        printf("Media: %.2f\nReprovado...", m);
    }

    return 0;
}