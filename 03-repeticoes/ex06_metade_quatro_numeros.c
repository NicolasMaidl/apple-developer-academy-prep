#include <stdio.h>

int main() {
    float num, metade;
    int i;

    for (i = 1; i <= 4; i++) {
        printf("Digite um número: ");
        scanf("%f", &num);

        metade = num / 2;

        printf("A metade é: %.2f\n", metade);
    }

    return 0;
}
