#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite as tres medidas: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Erro: as medidas devem ser positivas.");
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("As medidas nao podem formar um triangulo.");
    }
    else if (a == b && b == c) {
        printf("Triangulo Equilatero.");
    }
    else if (a == b || a == c || b == c) {
        printf("Triangulo Isosceles.");
    }
    else {
        printf("Triangulo Escaleno.");
    }

    return 0;
}
