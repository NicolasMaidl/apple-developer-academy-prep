#include <stdio.h>

int main(){
    float V[10], soma = 0;
    int i, negativos = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &V[i]);
    }

     for(i = 0; i < 10; i++){
      if(V[i] < 0){
          negativos++;
      }

      if(V[i] > 0){
          soma += V[i];
      }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f", soma);

    return 0;
}
