#include <stdio.h>

int main() {
    int n, a, i, sum = 0;
    double avg;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &a);
        sum += a;
    }

    avg = (double)sum / n;

    printf("avg : %.1f\n", avg);

    if (avg >= 80) {
        printf("pass\n");
    }
    else {
        printf("fail\n");
    }

    return 0;
}