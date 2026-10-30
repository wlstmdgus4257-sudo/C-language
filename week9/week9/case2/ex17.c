#include <stdio.h>

int main() {
    int a, sum = 0, cnt = 0;
    double avg = 0;

    while (scanf("%d", &a) == 1) {
        if (a < 0 || a > 100) {
            break;
        }

        sum += a;
        cnt++;
    }

    if (cnt > 0) {
        avg = (double)sum / cnt;
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}