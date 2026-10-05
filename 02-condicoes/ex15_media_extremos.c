#include <stdio.h>

int main() {
    int a, b, c, menor, maior;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    maior = a;
    menor = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    media = (maior + menor) / 2.0;

    printf("A média entre o menor e o maior é: %.2f", media);

    return 0;
}
