#include <stdio.h>

int main() {
    float salario, prestacao;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.20) {
        printf("Empréstimo não concedido");
    }
    else {
        printf("Empréstimo concedido");
    }

    return 0;
}
