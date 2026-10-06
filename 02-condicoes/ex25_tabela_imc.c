#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 20) {
        printf("Abaixo do peso");
    }
    else if (imc < 25) {
        printf("Peso normal");
    }
    else if (imc < 30) {
        printf("Sobre-peso");
    }
    else if (imc < 40) {
        printf("Obeso");
    }
    else {
        printf("Obeso morbido");
    }

    return 0;
}
