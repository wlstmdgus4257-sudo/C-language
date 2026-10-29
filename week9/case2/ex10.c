#include <stdio.h>

int main() {
    int a;

    while (scanf("%d", &a) == 1) {
        if (a == -1) {
            break;
        }

        if (a % 3 != 0) {
            continue;
        }

        printf("%d\n", a / 3);
    }

    return 0;
}