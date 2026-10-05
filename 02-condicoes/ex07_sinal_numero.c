#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("É negativo");
    }
    else if (num == 0) {
        printf("É nulo");
    }
    else {
        printf("É positivo");
    }

    return 0;
}
