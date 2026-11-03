#include <stdio.h>

int main() {
    int cnt[10] = {0};
    int a, i;

    while (1) {
        scanf("%d", &a);

        if (a == 0) {
            break;
        }

        cnt[a % 10]++;
    }

    for (i = 0; i < 10; i++) {
        if (cnt[i] > 0) {
            printf("%d : %d\n", i, cnt[i]);
        }
    }

    return 0;
}