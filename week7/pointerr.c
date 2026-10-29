
#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;

    printf("처음 값: %d\n", *p);

    printf("1. (*p)++ : %d\n", (*p)++);
    printf("2. (*p)+1 : %d\n", (*p)+1);

    *p += 1;
    printf("3. *p+=1 : %d\n", *p);

    (*p) += 1;
    printf("4. (*p)+=1 : %d\n", *p);

    *p = *p + 1;
    printf("5. *p=*p+1 : %d\n", *p);

    printf("6. ++*p : %d\n", ++*p);

    printf("7. ++(*p) : %d\n", ++(*p));

    return 0;
}