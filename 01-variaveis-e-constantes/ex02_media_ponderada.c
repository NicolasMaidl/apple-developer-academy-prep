#include <stdio.h>

int main(){
    float a,b,c, media;

    printf("Digite 3 notas: ");
    scanf("%f%f%f", &a, &b, &c);

    media = (a * 0.3) + (b * 0.5) + (c * 0.2);

    printf("Média: %.2f", media);

    return 0;
}
