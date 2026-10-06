#include <stdio.h>

int main() {
    int num, i;

    for (i = 1; i <= 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        printf("O cubo é: %d\n", num * num * num);
    }

    return 0;
}
