#include <stdio.h>

int main(){
    int a1, r, n, an;

    printf("Digite o a1 e a razao: ");
    scanf("%d%d", &a1, &r);

    printf("Digite o n: ");
    scanf("%d", &n);

    an = a1 + (n - 1) * r;

    printf("An: %d", an);

    return 0;
}
