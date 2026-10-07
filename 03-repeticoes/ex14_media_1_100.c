#include <stdio.h>

int main() {
    int i;
    int soma = 0;
    float media;

    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
        soma = soma + i;
    }

    media = (float)soma / 100;

    printf("Media: %.2f\n", media);

    return 0;
}
