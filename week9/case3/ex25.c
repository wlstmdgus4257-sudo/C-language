#include <stdio.h>

int main() {
    int a, b, i, j, step;

    scanf("%d %d", &a, &b);

    if (a <= b) {
        step = 1;
    }
    else {
        step = -1;
    }

    for (i = 1; i <= 9; i++) {
        for (j = a; ; j += step) {
            printf("%d * %d = %2d", j, i, j * i);

            if (j == b) {
                break;
            }

            printf("   ");
        }
        printf("\n");
    }

    return 0;
}