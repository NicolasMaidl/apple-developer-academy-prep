#include <stdio.h>

int main(){
    float a, b, c, d, media;

    printf("Digite 4 notas bimestrais: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);

    media = (a + b + c + d) / 4;

    printf("Média: %.2f", media);

    return 0;
}
