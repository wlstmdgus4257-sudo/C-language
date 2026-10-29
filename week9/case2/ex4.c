#include <stdio.h>

int main() {
    int n, num = 1, sum = 0;

    scanf("%d", &n);

    while (num <= n) {
        sum += num;
        num++;
    }

    printf("%d\n", sum);

    return 0;
}