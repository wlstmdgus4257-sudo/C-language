#include <stdio.h>

int main() {
    int arr[4][2];
    int i, j, sum;
    int total = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            total += arr[i][j];
        }
    }

    // 가로 평균
    for (i = 0; i < 4; i++) {
        sum = 0;

        for (j = 0; j < 2; j++) {
            sum += arr[i][j];
        }

        printf("%d", sum / 2);

        if (i < 3) printf(" ");
    }
    printf("\n");

    // 세로 평균
    for (j = 0; j < 2; j++) {
        sum = 0;

        for (i = 0; i < 4; i++) {
            sum += arr[i][j];
        }

        printf("%d", sum / 4);

        if (j < 1) printf(" ");
    }
    printf("\n");

    // 전체 평균
    printf("%d\n", total / 8);

    return 0;
}