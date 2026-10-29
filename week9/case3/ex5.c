#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 20; i += 2) {
        printf("%d", i);

        if (i < 19) {
            printf(" ");
        }
    }

    return 0;
}