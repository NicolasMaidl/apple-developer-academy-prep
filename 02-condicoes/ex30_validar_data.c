#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasNoMes;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12 || ano < 1) {
        printf("Data invalida.\n");
        return 0;
    }

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
        mes == 8 || mes == 10 || mes == 12) {
        
        diasNoMes = 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        
        diasNoMes = 30;
    }
    else {
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
            diasNoMes = 29;
        }
        else {
            diasNoMes = 28;
        }
    }

    if (dia >= 1 && dia <= diasNoMes) {
        printf("Data valida: %02d/%02d/%d\n", dia, mes, ano);
    }
    else {
        printf("Data invalida.\n");
    }

    return 0;
}
