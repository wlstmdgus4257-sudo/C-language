#include <stdio.h>

int main() {
    int a, i, cnt = 0;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &a);

        if (a % 2 == 0) {
            cnt++;
        }
    }

    printf("Even numbers = %d\n", cnt);

    return 0;
}