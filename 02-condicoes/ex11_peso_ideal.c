#include <stdio.h>

int main() {
    float altura, peso;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    do {
        printf("Digite seu sexo (M/F): ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
    }
    else {
        peso = (62.1 * altura) - 44.7;
    }

    printf("Peso ideal: %.2f kg", peso);

    return 0;
}
