#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a > 0) {
        if (a % 2 == 0) {
            printf("Even Number\n");
        }
        else {
            printf("Odd Number\n");
        }
    }
    else {
        printf("Non positive\n");
    }

    return 0;
}