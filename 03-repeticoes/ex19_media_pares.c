#include <stdio.h>

int main() {
    int n, i, numero;
    float soma = 0;
    float media;
    int quantidadePares = 0;

    printf("Digite quantos numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            soma = soma + numero;
            quantidadePares++;
        }
    }

    if (quantidadePares > 0) {
        media = soma / quantidadePares;
        printf("Media dos pares: %.2f\n", media);
    } else {
        printf("Nao foram digitados numeros pares.\n");
    }

    return 0;
}
