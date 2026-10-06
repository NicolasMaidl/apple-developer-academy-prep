#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite as duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("Aprovado");
    }
    else if (media < 3) {
        printf("Reprovado");
    }
    else {
        printf("Em Exame");
    }

    return 0;
}
