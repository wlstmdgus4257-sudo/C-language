#include <stdio.h>

int main() {
    int arr[100];
    int i, cnt = 0;

    for (i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            break;
        }

        cnt++;
    }

    printf("%d\n", cnt);

    for (i = 0; i < cnt; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d", arr[i] / 2);
        }
        else {
            printf("%d", arr[i] * 2);
        }

        if (i < cnt - 1) {
            printf(" ");
        }
    }

    return 0;
}