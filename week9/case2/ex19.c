#include <stdio.h>

int main() {
    double a, b, area;
    char c;

    while (1) {
        scanf("%lf %lf", &a, &b);

        area = a * b / 2;

        printf("Triangle width = %.1f\n", area);
        printf("Continue? ");

        scanf(" %c", &c);

        if (c != 'Y' && c != 'y') {
            break;
        }
    }

    return 0;
}