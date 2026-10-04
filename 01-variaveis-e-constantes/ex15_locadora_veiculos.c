#include <stdio.h>

int main() {
    int dias, km;
    float taxa_dia, taxa_km, valor;

    printf("Digite a taxa por dia: ");
    scanf("%f", &taxa_dia);

    printf("Digite a taxa por km: ");
    scanf("%f", &taxa_km);

    printf("Digite quantos dias: ");
    scanf("%d", &dias);

    printf("Digite quantos km: ");
    scanf("%d", &km);

    valor = taxa_dia * dias + taxa_km * km;

    printf("Valor a ser pago: %.2f", valor);

    return 0;
}
