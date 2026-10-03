#include <stdio.h>

int main() {
    float A, B, a, b, c, resultado;

    printf("Digite o limite inferior A: ");
    scanf("%f", &A);

    printf("Digite o limite superior B: ");
    scanf("%f", &B);

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    resultado = (a * B * B * B * B) / 4.0
              + (b * B * B * B) / 3.0
              + (c * B * B) / 2.0
              - ((a * A * A * A * A) / 4.0
              + (b * A * A * A) / 3.0
              + (c * A * A) / 2.0);

    printf("Resultado da integral: %.2f\n", resultado);

    return 0;
}
