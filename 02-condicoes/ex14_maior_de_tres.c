#include <stdio.h>

int main() {
    int a, b, c, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    printf("O maior número é: %d", maior);

    return 0;
}
