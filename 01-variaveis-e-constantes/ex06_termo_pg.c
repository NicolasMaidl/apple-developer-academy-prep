#include <stdio.h>
#include <math.h>

int main(){
    float a1, q, an;
    int n;

    printf("Digite o primeiro termo e a razao: ");
    scanf("%f%f", &a1, &q);

    printf("Digite o termo n: ");
    scanf("%d", &n);

    an = a1 * pow(q, n - 1);

    printf("An: %.2f", an);

    return 0;
}
