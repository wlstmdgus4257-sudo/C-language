#include <stdio.h>

int main() {
    int arr[100];
    int i, cnt = 0;
    int max, min;

    for (i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            break;
        }

        cnt++;
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < cnt; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}

