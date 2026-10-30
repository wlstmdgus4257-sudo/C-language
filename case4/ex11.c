#include <stdio.h>

int main() {
    int i, j, num = 1;
    char ch = 'a';

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }

        for (j = 1; j <= 5 - i; j++) {
            printf("%d", num);
            num++;

            if (j < 5 - i) {
                printf(" ");
            }
        }

        if (i < 4) {
            printf("\n");
        }
    }

    return 0;
}