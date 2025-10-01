//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch07 예제 1
//날짜 : 0924




#include <stdio.h>

int main(void)
{
    int arr[5];
    int byte_size = 0;
    int size = 0;
    int i;

    byte_size = sizeof(arr);
    printf("배열의 바이트 크기: %d\n", byte_size);

    size = sizeof(arr) / sizeof(arr[0]);
    printf("배열의 크기: %d\n", size);

    for (i = 0; i < size; i++)
        arr[i] = 0;

    return 0;
}