#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;

    printf("=== CARDAPIO ===\n");
    printf("101 - Cachorro-quente  R$ 5.00\n");
    printf("102 - Bauru            R$ 8.00\n");
    printf("103 - Hamburguer       R$ 10.00\n");
    printf("104 - X-Salada         R$ 15.00\n");

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo == 101) {
        preco = 5.00;
    }
    else if (codigo == 102) {
        preco = 8.00;
    }
    else if (codigo == 103) {
        preco = 10.00;
    }
    else if (codigo == 104) {
        preco = 15.00;
    }
    else {
        printf("Codigo invalido.\n");
        return 0;
    }

    total = preco * quantidade;

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
