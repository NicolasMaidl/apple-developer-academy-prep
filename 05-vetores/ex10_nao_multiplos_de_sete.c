#include <stdio.h>

int main(){
    int V[100];
    int i, num = 0;

    for(i = 0; i < 100; ){
        if(num % 7 != 0){
            V[i] = num;
            i++;
        }
        num++;
    }

    for(i = 0; i < 100; i++){
        printf("%d\n", V[i]);
    }

    return 0;
}
