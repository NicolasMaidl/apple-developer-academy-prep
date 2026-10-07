#include <stdio.h>

int main(){
    int num, i, maior, numero;

    printf("Digite quantos números: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("Digite o %d número: ", i);
        scanf("%d", &numero);

        if (i == 1){
            maior = numero;
        }
        else{
            if (numero > maior){
                maior = numero;
            }
        }
    }

    printf("Maior número: %d", maior);

    return 0;
}
