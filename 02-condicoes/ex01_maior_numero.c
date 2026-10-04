#include <stdio.h>

int main() {
    int x, y, maior;

    printf("Digite dois números: ");
    scanf("%d%d", &x, &y);

    maior = x;

    if (y > maior) {
        maior = y;
    }

    printf("Maior: %d", maior);

    return 0;
}
