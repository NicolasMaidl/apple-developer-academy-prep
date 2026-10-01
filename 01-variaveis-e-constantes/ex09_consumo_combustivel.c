#include <stdio.h>
#define consumo 12

int main(){
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo gasto na viagem: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media: ");
    scanf("%f", &velocidade);

    distancia = velocidade * tempo;
    litros = distancia / consumo;

    printf("Velocidade media: %.2f km/h\n", velocidade);
    printf("Tempo gasto: %.2f horas\n", tempo);
    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Litros utilizados: %.2f L\n", litros);

    return 0;
}
