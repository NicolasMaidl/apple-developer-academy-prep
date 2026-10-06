#include <stdio.h>

int main() {
    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
        soma = soma + i;
    }

    printf("A soma de todos os números é: %d\n", soma);

    return 0;
}
