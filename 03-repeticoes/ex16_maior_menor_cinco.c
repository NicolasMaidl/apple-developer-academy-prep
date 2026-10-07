#include <stdio.h>

int main() {
    float numero, maior, menor;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%f", &numero);

        if (i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}
