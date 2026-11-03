#include <stdio.h>

int main() {
    int arr[5][5] = {0};
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            }
            else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for (i = 0; i < 5; i++) {
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