#include <stdio.h>

int main() {
    int arr[7] = {0};
    int i, num;

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        arr[num]++;
    }

    for (i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, arr[i]);
    }

    return 0;
}