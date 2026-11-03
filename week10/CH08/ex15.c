#include <stdio.h>

int main() {
    char arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf(" %c", &arr[i]);
    }

    for (i = 9; i >= 0; i--) {
        printf("%c", arr[i]);

        if (i > 0) {
            printf(" ");
        }
    }

    return 0;
}