#include <stdio.h>

int main() {
    int n, i, numero;
    int negativos = 0;
    int paresPositivos = 0;
    int somaImpares = 0;
    int totalImpares = 0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &numero);

        if (numero < 0) {
            negativos++;
        }

        if (numero > 0 && numero % 2 == 0) {
            paresPositivos++;
        }

        if (numero % 2 != 0) {
            somaImpares = somaImpares + numero;
            totalImpares++;
        }
    }

    printf("Porcentagem de negativos: %.2f%%\n",
           (negativos * 100.0) / n);

    printf("Porcentagem de pares positivos: %.2f%%\n",
           (paresPositivos * 100.0) / n);

    if (totalImpares > 0) {
        printf("Media dos impares: %.2f\n",
               (float)somaImpares / totalImpares);
    } else {
        printf("Nao existem numeros impares.\n");
    }

    return 0;
}
