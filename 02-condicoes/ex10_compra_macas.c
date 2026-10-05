#include <stdio.h>

int main() {
    int macas;
    float total;

    printf("Digite a quantidade de maçãs: ");
    scanf("%d", &macas);

    if (macas < 12) {
        total = macas * 0.30;
    }
    else {
        total = macas * 0.25;
    }

    printf("Valor total: R$ %.2f", total);

    return 0;
}
