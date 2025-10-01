//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch07 예제 2
//날짜 : 0924

#include <stoio.h>

#define ARR_SIZE 5

int main(void)
{
    int arr[ARR_SIZE];
    int i;

    for (i = 0; i < ARR_SIZE; i++)
        arr[i] = 0;

    printf("arr = ");
    for (i = 0; i < ARR_SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
