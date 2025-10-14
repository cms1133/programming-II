//   학번: 202511239
//   이름: 채명식
//   프로그램 명: 챕터 8
//   날짜: 2025.09.24

#include <stdio.h>
void swap(int* x, int* y);

int main(void)
{
   int a = 3, b = 7;

   printf("a = %d, b = %d\n", a, b);
   swap(&a, &b);
   printf("a = %d, b = %d\n", a, b);

   return 0;
}

void swap(int* x, int* y)
{
   int temp = *x;
   *x = *y;
   *y = temp;
}