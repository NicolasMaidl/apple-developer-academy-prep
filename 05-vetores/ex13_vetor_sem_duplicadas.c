#include <stdio.h>

int main(){
    int V[10];
    int i, j, numero, repetido;

    for(i = 0; i < 10; ){
        scanf("%d", &numero);

        repetido = 0;

        for(j = 0; j < i; j++){
            if(V[j] == numero){
                repetido = 1;
            }
        }

        if(repetido == 0){
            V[i] = numero;
            i++;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", V[i]);
    }

    return 0;
}
