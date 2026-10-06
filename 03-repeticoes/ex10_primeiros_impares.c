#include <stdio.h>

int main() {
    int i, contador = 0;

    for (i = 1; contador < 20; i += 2) {
        printf("%d\n", i);
        contador++;
    }

    return 0;
}
