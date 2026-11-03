#include <stdio.h>

int main() {
    int arr[10][10] = {0};
    int n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            printf("%d", arr[i][j]);

            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}