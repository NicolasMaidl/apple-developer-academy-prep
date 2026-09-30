#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;

    printf("Digite as tres arestas: ");
    scanf("%f%f%f", &a, &b, &c);

    d = sqrt(a*a + b*b + c*c);

    printf("Diagonal: %.2f", d);

    return 0;
}
