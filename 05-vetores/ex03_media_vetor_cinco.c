#include <stdio.h>

int main() {
    int vetor[5];
    int i;
    float soma = 0, media;

    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 5;

    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nMedia: %.2f", media);

    return 0;
}
