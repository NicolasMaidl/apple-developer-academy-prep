#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero do mes: ");
    scanf("%d", &mes);

    if (mes >= 1 && mes <= 3) {
        printf("1o trimestre");
    }
    else if (mes >= 4 && mes <= 6) {
        printf("2o trimestre");
    }
    else if (mes >= 7 && mes <= 9) {
        printf("3o trimestre");
    }
    else if (mes >= 10 && mes <= 12) {
        printf("4o trimestre");
    }
    else {
        printf("Erro: mes invalido.");
    }

    return 0;
}
