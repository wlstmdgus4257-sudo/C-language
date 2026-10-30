#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d", i);
            if (j < 5) {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d", j);
            if (j < 5) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}