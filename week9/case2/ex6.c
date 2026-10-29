#include <stdio.h>

int main() {
    int a;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }

        if (a > 0) {
            printf("positive number\n");
        }
        else {
            printf("negative number\n");
        }
    }

    return 0;
}