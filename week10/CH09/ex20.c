#include <stdio.h>

int main() {
    int arr[5][5] = {0};
    int i, j;

    arr[0][0] = 1;
    arr[0][2] = 1;
    arr[0][4] = 1;

    for (i = 1; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j > 0) {
                arr[i][j] += arr[i-1][j-1];
            }

            if (j < 4) {
                arr[i][j] += arr[i-1][j+1];
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", arr[i][j]);

            if (j < 4) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}