#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 15; i++) {
        printf("%d", i);

        if (i < 15) {
            printf(" ");
        }
    }

    return 0;
}