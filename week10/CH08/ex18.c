#include <stdio.h>

int main() {
    double arr[6];
    double sum = 0, avg;
    int i;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 6;

    printf("%.1f\n", avg);

    return 0;
}