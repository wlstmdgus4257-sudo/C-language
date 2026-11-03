#include <stdio.h>

int main() {
    int arr[10];
    int i, sum = 0, oddSum = 0;
    double avg;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            sum += arr[i];
        }
        else {
            oddSum += arr[i];
        }
    }

    avg = (double)oddSum / 5;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
