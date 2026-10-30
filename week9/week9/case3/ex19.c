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

    printf("%.2f\n", avg);

    return 0;
}