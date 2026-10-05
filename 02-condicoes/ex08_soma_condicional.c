#include <stdio.h>

int main() {
    int x, y, soma;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite outro número: ");
    scanf("%d", &y);

    soma = x + y;

    if (soma > 20) {
        soma = soma + 8;
    }
    else {
        soma = soma - 5;
    }

    printf("Resultado: %d", soma);

    return 0;
}
