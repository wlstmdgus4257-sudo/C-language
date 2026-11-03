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

    for (i = cnt - 1; i >= 0; i--) {
        printf("%d", arr[i]);

        if (i > 0) {
            printf(" ");
        }
    }

    return 0;
}