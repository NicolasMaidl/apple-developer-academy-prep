#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres angulos do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b + c != 180) {
        printf("Erro: os angulos nao formam um triangulo.");
    }
    else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo Retangulo.");
    }
    else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo Obtusangulo.");
    }
    else {
        printf("Triangulo Acutangulo.");
    }

    return 0;
}
