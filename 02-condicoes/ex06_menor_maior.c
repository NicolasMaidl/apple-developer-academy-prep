#include <stdio.h>

int main() {
    int x, y, maior;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("Digite outro número: ");
    scanf("%d", &y);

    maior = x;

    if (y > maior) {
        maior = y;
        printf("%d é o maior e %d é o menor", y, x);
    }
    else {
        printf("%d é o maior e %d é o menor", x, y);
    }

    return 0;
}
