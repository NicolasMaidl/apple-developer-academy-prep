#include <stdio.h>

int main(){
    int A[10], B[10], C[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero de A: ", i + 1);
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero de B: ", i + 1);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", C[i]);
    }

    return 0;
}
