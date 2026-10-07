#include <stdio.h>

int main() {
    int vetor[8];
    int X, Y;
    int i;
    int soma;

    for (i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite X:");
    scanf("%d", &X);
    printf("Digite Y: ");
    scanf("%d", &Y);

    soma = vetor[X] + vetor[Y];

    printf("%d", soma);

    return 0;
}
