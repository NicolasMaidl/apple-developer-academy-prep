#include <stdio.h>
#include <math.h>

int main(){
    int x1,y1,z1,x2,y2,z2;
    float d;

    printf("Digite o primeiro ponto: ");
    scanf("%d%d%d", &x1, &y1, &z1);

    printf("Digite o segundo ponto: ");
    scanf("%d%d%d", &x2, &y2, &z2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("Distância: %.2f", d);

    return 0;
}
