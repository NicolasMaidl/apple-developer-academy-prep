#include <stdio.h>

int main() {
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if (x % 2 == 0){
        printf("É par ");
    }
    else{
        printf("É ímpar ");
    }

    return 0;
}



    
