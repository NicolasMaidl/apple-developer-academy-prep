#include <stdio.h>

int main() {
    int anos;
    float batimentos;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    batimentos = 60.0 * 60 * 24 * 365.25 * anos;

    printf("Batimentos: %.0f", batimentos);

    return 0;
}
