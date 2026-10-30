#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * (i - 1); j++) {
            printf(" ");
        }

        for (j = 1; j <= n - i + 1; j++) {
            printf("%d", num);
            num++;

            if (j < n - i + 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}