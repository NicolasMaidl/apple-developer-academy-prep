#include <stdio.h>

int main() {
    float taxa, iof, dolares, reais;

    printf("Digite a taxa de cambio: ");
    scanf("%f", &taxa);

    printf("Digite o IOF (em %%): ");
    scanf("%f", &iof);

    printf("Digite o valor em dolares que sera comprado: ");
    scanf("%f", &dolares);

    reais = dolares * taxa;
    reais = reais + (reais * iof / 100);

    printf("Valor necessario em reais: R$ %.2f", reais);

    return 0;
}
