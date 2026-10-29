#include <stdio.h>

int main() {
    int a, odd = 0, even = 0;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }

        if (a % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}