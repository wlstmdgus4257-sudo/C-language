#include <stdio.h>

int main() {
    int height, weight, a;

    scanf("%d %d", &height, &weight);

    a = weight + 100 - height;

    printf("%d\n", a);

    if (a > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }

    return 0;
}