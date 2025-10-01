//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch07 예제 4
//날짜 : 0924

#include <stdio.h>

int main(void)
{
    int amount[5] = { 1, 1, 5};
    int price[5] = { 0 };
    int i;

    printf("amount = ");
    for (i = 0; i < 5; i++)
        printf("%d ", amount[i]);
    printf("\n");

    printf("price = ");
    for (i = 0; i < 5; i++)
        printf("%d ", price[i]);
    printf("\n");

    return 0;
}
