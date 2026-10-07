#include <stdio.h>

int main() {
    int i, numero;
    int somaPositivos = 0;
    int totalNegativos = 0;

    for (i = 1; i <= 20; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            somaPositivos = somaPositivos + numero;
        } else if (numero < 0) {
            totalNegativos++;
        }
    }

    printf("Soma dos positivos: %d\n", somaPositivos);
    printf("Total de numeros negativos: %d\n", totalNegativos);

    return 0;
}
