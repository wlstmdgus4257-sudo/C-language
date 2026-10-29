#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a >= 80) 
    {
        printf("Passed.\n");
    }
    else
    {
        printf("Failed.\n");
    }

    return 0;
}