#include <stdio.h>

int main(){
    int i;
    float A[20], B[20];

    for(i = 0; i < 20; i++){
        printf("Digite o %d número: ", i + 1);
        scanf("%f", &A[i]);
    }

    for(i = 0; i < 20; i++){
        B[i] = A[i] * A[i];
    }

    for(i = 0; i < 20; i++){
        printf("%.2f\n", B[i]);
    }

    return 0;   
}
