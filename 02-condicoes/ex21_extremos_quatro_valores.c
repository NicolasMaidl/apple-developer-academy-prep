#include <stdio.h>

int main() {
    int a, b, c, d, maior, menor;

    printf("Digite 4 numeros: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    maior = a;
    menor = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    if (d > maior) {
        maior = d;
    }

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    if (d < menor) {
        menor = d;
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}
