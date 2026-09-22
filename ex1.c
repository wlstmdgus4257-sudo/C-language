#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer;
    int num;
    int count = 0;

    srand(time(NULL));
    answer = rand() % 100 + 1;

    while (1)
    {
        printf("숫자 입력: ");
        scanf("%d", &num);
        count++;

        if (num > answer)
        {
            printf("더 작은 수입니다.\n");
        }
        else if (num < answer)
        {
            printf("더 큰 수입니다.\n");
        }
        else
        {
            printf("정답입니다. 시도 횟수: %d\n", count);
            break;
        }
    }

    return 0;
}