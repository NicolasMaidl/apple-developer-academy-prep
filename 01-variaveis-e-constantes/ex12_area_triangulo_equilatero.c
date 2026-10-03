#include <stdio.h>
#include <math.h>

int main() {
    float lado, area;

    printf("Digite o lado do triangulo: ");
    scanf("%f", &lado);

    area = (sqrt(3) / 4) * lado * lado;

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
