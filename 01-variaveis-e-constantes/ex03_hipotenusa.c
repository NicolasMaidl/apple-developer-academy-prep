#include <stdio.h>
#include <math.h>

int main(){
    float a, b, h;

    printf("Digite os lados do triângulo: ");
    scanf("%f%f", &a, &b);

    h = sqrt(a*a + b*b);

    printf("Hipotenusa: %.2f", h);

    return 0;
}
