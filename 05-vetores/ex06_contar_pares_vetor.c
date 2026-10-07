#include <stdio.h>

int main(){
    int V[10], i;
    int qtd = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &V[i]);
    }

    for(i = 0; i < 10; i++){
        if(V[i] % 2 == 0){
            qtd++;
        }
    }

    if(qtd == 0){
        printf("Não existem pares");
    }
    else{
        printf("Quantidade de pares: %d", qtd);
    }

    return 0;
}
