#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("É múltiplo de 3");
    }
    else {
        printf("Não é múltiplo de 3");
    }

    return 0;
}
