#include <stdio.h>

int main() {
    int a, cnt = 0;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }

        if (a % 3 != 0 && a % 5 != 0) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}