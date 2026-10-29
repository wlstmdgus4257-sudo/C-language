#include <stdio.h>

int main() {
    int a;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    printf("Select:\n");

    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("You selected ADD.\n");
            break;

        case 2:
            printf("You selected EDIT.\n");2
            break;

        case 3:
            printf("You selected DEL.\n");
            break;

        default:
            printf("Wrong choice.\n");
            break;
    }

    return 0;
}