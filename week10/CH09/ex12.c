#include <stdio.h>

int main() {
    int arr[5][4];
    int i, j, sum;
    double avg;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        sum = 0;

        for (j = 0; j < 4; j++) {
            sum += arr[i][j];
        }

        avg = (double)sum / 4;

        printf("%d %.1f\n", sum, avg);
    }

    return 0;
}