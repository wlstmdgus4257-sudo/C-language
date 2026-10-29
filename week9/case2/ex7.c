#include <stdio.h>

int main() {
    int a, cnt = 0, sum = 0;
    double avg = 0;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }

        cnt++;
        sum += a;
    }

    if (cnt > 0) {
        avg = (double)sum / cnt;
    }

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);

    return 0;
}