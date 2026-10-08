#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("=== CALCULADORA ===\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    if (opcao == 1) {
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (opcao == 2) {
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (opcao == 3) {
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if (opcao == 4) {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        }
        else {
            printf("Erro: nao e possivel dividir por zero.\n");
        }
    }
    else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
