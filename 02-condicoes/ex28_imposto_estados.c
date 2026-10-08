#include <stdio.h>

int main() {
    float valor, imposto, valorFinal;
    char estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Digite o estado de destino (MG, SP, RJ ou MS): ");
    scanf(" %c%c", &estado, &estado);

    if (estado == 'M' || estado == 'm') {
        imposto = 0.07;
    }
    else if (estado == 'S' || estado == 's') {
        imposto = 0.12;
    }
    else if (estado == 'R' || estado == 'r') {
        imposto = 0.15;
    }
    else {
        imposto = 0.08;
    }

    valorFinal = valor + (valor * imposto);

    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
