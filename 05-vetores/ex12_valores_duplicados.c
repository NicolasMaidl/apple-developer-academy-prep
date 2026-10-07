#include <stdio.h>

int main(){
    int V[10];
    int i, j;

    for(i = 0; i < 10; i++){
        scanf("%d", &V[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(V[i] == V[j]){
                printf("%d\n", V[i]);
            }
        }
    }

    return 0;
}
