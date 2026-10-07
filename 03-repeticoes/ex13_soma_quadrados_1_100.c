#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
        soma = soma + (i * i);
    }

    printf("Soma dos quadrados: %d\n", soma);

    return 0;
}
