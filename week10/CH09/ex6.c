#include <stdio.h>

int main() {
    int arr[100];
    int i = 2, j;

    arr[0] = 100;
    scanf("%d", &arr[1]);

    while (i < 100) {
        arr[i] = arr[i - 2] - arr[i - 1];

        if (arr[i] < 0) {
            break;
        }

        i++;
    }

    for (j = 0; j <= i; j++) {
        printf("%d", arr[j]);

        if (j < i) {
            printf(" ");
        }
    }

    return 0;
}