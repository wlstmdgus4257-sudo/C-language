#include <stdio.h>

int main() {
    int arr[11] = {0};
    int a, i;

    while (1) {
        scanf("%d", &a);

        if (a < 1 || a > 10) {
            break;
        }

        arr[a]++;
    }

    for (i = 1; i <= 10; i++) {
        if (arr[i] > 0) {
            printf("%d : %d\n", i, arr[i]);
        }
    }

    return 0;
}