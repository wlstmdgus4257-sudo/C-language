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

    for (i = 1; i < cnt; i += 2) {
        printf("%d", arr[i]);

        if (i + 2 < cnt) {
            printf(" ");
        }
    }

    return 0;
}