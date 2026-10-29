#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    printf("%s\n", (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? "leap year" : "common year");

    return 0;
}