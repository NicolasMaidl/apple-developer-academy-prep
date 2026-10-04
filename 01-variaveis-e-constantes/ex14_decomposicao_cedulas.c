#include <stdio.h>

int main() {
    int valor;
    int ced100, ced50, ced20, ced10, ced5, ced1;

    printf("Digite um valor em reais: ");
    scanf("%d", &valor);

    ced100 = valor / 100;
    valor = valor % 100;

    ced50 = valor / 50;
    valor = valor % 50;

    ced20 = valor / 20;
    valor = valor % 20;

    ced10 = valor / 10;
    valor = valor % 10;

    ced5 = valor / 5;
    valor = valor % 5;

    ced1 = valor;

    printf("Cedulas de R$ 100: %d\n", ced100);
    printf("Cedulas de R$ 50: %d\n", ced50);
    printf("Cedulas de R$ 20: %d\n", ced20);
    printf("Cedulas de R$ 10: %d\n", ced10);
    printf("Cedulas de R$ 5: %d\n", ced5);
    printf("Cedulas de R$ 1: %d\n", ced1);

    return 0;
}
