#include <stdio.h>

int main(){
    int numero, unidades, dezenas, centenas, milhares;

    printf("Digite um numero de 4 algarismos: ");
    scanf("%d", &numero);

    unidades = numero % 10;
    dezenas = (numero / 10) % 10;
    centenas = (numero / 100) % 10;
    milhares = numero / 1000;

    printf("Unidades: %d\n", unidades);
    printf("Dezenas: %d\n", dezenas);
    printf("Centenas: %d\n", centenas);
    printf("Milhares: %d\n", milhares);

    return 0;
}
