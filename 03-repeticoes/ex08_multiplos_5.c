#include <stdio.h>

int main() {
    int i;

    for (i = 3; i <= 54; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
