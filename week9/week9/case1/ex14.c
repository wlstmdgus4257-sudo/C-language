#include <stdio.h>

int main() {
    char a;

    scanf("%c", &a);

    switch (a) {
        case 'A':
            printf("Excellent\n");
            break;

        case 'B':
            printf("Good\n");
            break;

        case 'C':
            printf("Usually\n");
            break;

        default:
            printf("error\n");
            break;
    }

    return 0;
}