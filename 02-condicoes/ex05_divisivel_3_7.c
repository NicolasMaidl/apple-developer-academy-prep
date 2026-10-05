#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0){
        printf("Divisivel por 3 e por 7");
    }
    else{
        printf("Não é divisivel por 3 e por 7");
    }

    return 0;
    
    }
