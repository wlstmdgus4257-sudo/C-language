#include <stdio.h>

int main() {
    int arr[5] = {95, 75, 85, 100, 50};
    int i, j, temp;

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);

        if (i < 4) {
            printf(" ");
        }
    }

    return 0;
}