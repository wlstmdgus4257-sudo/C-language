#include <stdio.h>

int main() {
    int arr[20];
    int i;

    arr[0] = 1;
    arr[1] = 1;

    for (i = 2; i < 20; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    for (i = 0; i < 20; i++) {
        printf("%d", arr[i]);

        if (i < 19) {
            printf(" ");
        }
    }

    return 0;
}