#include <stdio.h>

int main() {
    int n, i, j, num = 0;
    char ch = 'A';

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j > 1) {
                printf(" ");
            }

            if (j <= n - i + 1) {
                printf("%c", ch);
                ch++;
            }
            else {
                printf("%d", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}