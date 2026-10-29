#include <stdio.h>

int main() 
{
    int num = 50;
    int *pnum; //정수형 포인터 변수 pnum 선언

    pnum = &num; // pnum을 num의 주소로 초기화하여 pnum을 가리키도록 함

    printf("*(pnum) = %d \n", *(pnum));
    printf("*(pnum--)= %d \n", *(pnum--));
    printf("*(--pnum) = %d \n", *(--pnum));
    
    return 0;//pnum이 가리키는 값 출력
}