#include <stdio.h>

int main() {
    char a;
    int i;

    scanf(" %c", &a);

    for (i = 1; i <= 20; i++) {
        printf("%c", a);
    }

    return 0;
}