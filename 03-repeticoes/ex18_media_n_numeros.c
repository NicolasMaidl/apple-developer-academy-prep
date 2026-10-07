#include <stdio.h>

int main() {
    int n, i, numero;
    int soma = 0;
    float media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
    }

    media = (float)soma / n;

    printf("Media: %.2f\n", media);

    return 0;
}
