#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float p;
    float h;
    float imc;

    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &p);

    printf("Entre com sua altura em metros: ");
    scanf("%f", &h);

    imc = p / (h * h);

    if(imc < 17.0) {
        printf("IMC: %.2f\nVoce esta muito abaixo do peso ideal!", imc);
    } else if(imc >= 17.0 && imc < 18.5) {
        printf("IMC: %.2f\nVoce esta abaixo do peso ideal!", imc);
    } else if(imc >= 18.5 && imc < 25.0) {
        printf("IMC: %.2f\nParabens! Voce esta em seu peso normal!", imc);
    } else if(imc >= 25.0 && imc < 30.0) {
        printf("IMC: %.2f\nAtencao, voce esta acima de seu peso (sobrepeso)!", imc);
    } else if(imc >= 30.0 && imc < 35.0) {
        printf("IMC: %.2f\nCuidado! Obesidade grau I!", imc);
    } else if(imc >= 35.0 && imc < 40.0) {
        printf("IMC: %.2f\nCuidado! Obesidade grau II!", imc);
    } else {
        printf("IMC: %.2f\nMuito cuidado!!! Obesidade grau III!", imc);
    }

    return 0;
}