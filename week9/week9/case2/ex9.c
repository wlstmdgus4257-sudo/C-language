#include <stdio.h>

int main() {
    int a, max = 0, min = 101;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }

        if (a < 1 || a > 100) {
            continue;
        }

        if (a > max) {
            max = a;
        }

        if (a < min) {
            min = a;
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}