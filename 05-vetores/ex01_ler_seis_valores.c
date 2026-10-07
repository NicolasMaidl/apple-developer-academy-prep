#include <stdio.h>

int main() {
    int vetor[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
  
    printf("\nValores lidos:\n");

    for (i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
