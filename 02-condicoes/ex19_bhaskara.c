#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Erro: nao e uma equacao do 2o grau.");
    }
    else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("A equacao nao possui solucoes reais.");
        }
        else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("A equacao possui uma solucao real: x = %.2f", x1);
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("As solucoes sao:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
