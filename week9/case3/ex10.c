#include <stdio.h>

int main() {
    int a, i, sum = 0;
    double avg;

    for (i = 1; i <= 5; i++) {
        scanf("%d", &a);
        sum += a;
    }

    avg = sum / 5.0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}