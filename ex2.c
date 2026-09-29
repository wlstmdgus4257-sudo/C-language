#include <stdio.h>

int main() {
    int num[10];
    int count[7] = {0};

    // 10개의 숫자 입력
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // 숫자별 개수 세기
    for (int i = 0; i < 10; i++) {
        count[num[i]]++;
    }

    // 결과 출력
    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, count[i]);
    }

    return 0;
}