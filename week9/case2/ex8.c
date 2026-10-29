#include <stdio.h>

int main() {
    int a, small = 0, large = 0;

    while (scanf("%d", &a) == 1) {
        if (a < 50) {
            small++;
        }
        else {
            large++;
        }

        if (a >= 100) {
            break;
        }
    }

    printf("small : %d\n", small);
    printf("large : %d\n", large);

    return 0;
}