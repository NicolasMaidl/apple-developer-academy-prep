#include <stdio.h>

int main(){
    char texto[100];
    int i = 0;

    scanf("%s", texto);

    while(texto[i] != '\0'){
        i++;
    }

    printf("%c\n", texto[0]);
    printf("%c", texto[i - 1]);

    return 0;
}
