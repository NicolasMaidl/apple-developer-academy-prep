#include <stdio.h>
#include <math.h>

int main() {
    float num, raiz;
    int i;

    for (i = 1; i <= 4; i++) {
        printf("Digite um número: ");
        scanf("%f", &num);

        raiz = sqrt(num);

        printf("A raiz quadrada é: %.2f\n", raiz);
    }

    return 0;
}
