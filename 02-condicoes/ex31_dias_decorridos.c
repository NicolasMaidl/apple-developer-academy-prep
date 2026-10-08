#include <stdio.h>

int main() {
    int dia, mes;
    int dias = 0;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Data invalida.\n");
        return 0;
    }

    if (mes == 1) {
        dias = dia;
    }
    else if (mes == 2) {
        dias = 31 + dia;
    }
    else if (mes == 3) {
        dias = 31 + 28 + dia;
    }
    else if (mes == 4) {
        dias = 31 + 28 + 31 + dia;
    }
    else if (mes == 5) {
        dias = 31 + 28 + 31 + 30 + dia;
    }
    else if (mes == 6) {
        dias = 31 + 28 + 31 + 30 + 31 + dia;
    }
    else if (mes == 7) {
        dias = 31 + 28 + 31 + 30 + 31 + 30 + dia;
    }
    else if (mes == 8) {
        dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
    }
    else if (mes == 9) {
        dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
    }
    else if (mes == 10) {
        dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
    }
    else if (mes == 11) {
        dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
    }
    else if (mes == 12) {
        dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
    }

    printf("Dias decorridos desde 01/janeiro: %d\n", dias - 1);

    return 0;
}
