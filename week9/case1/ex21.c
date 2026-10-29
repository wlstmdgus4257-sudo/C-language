#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("dog\n");
            break;

        case 2:
            printf("cat\n");
            break;

        case 3:
            printf("chick\n");
            break;

        default:
            printf("blank\n");
            break;
    }

    return 0;
}