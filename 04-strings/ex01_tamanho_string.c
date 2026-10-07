#include <stdio.h>

int main(){
    char texto[100];
    int i = 0;

    scanf("%s", texto);

    while(texto[i] != '\0'){
        i++;
    }

    printf("%d", i);

    return 0;
}
