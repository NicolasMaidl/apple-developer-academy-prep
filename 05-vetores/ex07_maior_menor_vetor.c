#include <stdio.h>

int main(){
    int X[10], i, maior, menor;

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &X[i]);
    }

    maior = X[0];
    menor = X[0];

    for(i = 1; i < 10; i++){
        if(X[i] > maior){
            maior = X[i];
        }

        if(X[i] < menor){
            menor = X[i];
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d", menor);

    return 0;
}
