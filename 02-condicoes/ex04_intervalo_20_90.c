#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (20 < num && num < 90) {
        printf("Está no intervalo");
    }
    else {
        printf("Não está");
    }

    return 0;
}
