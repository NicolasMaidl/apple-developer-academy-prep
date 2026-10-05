#include <stdio.h>

int main() {
    float temperatura, resultado;
    char conversao;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite C para converter Celsius para Fahrenheit\n");
    printf("Digite F para converter Fahrenheit para Celsius\n");
    scanf(" %c", &conversao);

    if (conversao == 'C' || conversao == 'c') {
        resultado = (9 * temperatura + 160) / 5;
        printf("Temperatura em Fahrenheit: %.2f F", resultado);
    }
    else if (conversao == 'F' || conversao == 'f') {
        resultado = (5 * temperatura - 160) / 9;
        printf("Temperatura em Celsius: %.2f C", resultado);
    }
    else {
        printf("Conversão inválida");
    }

    return 0;
}
