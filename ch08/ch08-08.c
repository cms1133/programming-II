//   학번: 202511239
//   이름: 채명식
//   프로그램 명: 챕터 8
//   날짜: 2025.09.24

#include <stdio.h>

int main(void)
{
   int arr[5] = { 1,2,3,4,5 };
   int *p = &arr[0];
   int i;

   for (i = 0; i < 5; i++)
   {
      printf("p + % d = %p, ", i, p + i);
      printf("*(p + %d) = %d\n", i, *(p + i));
   }

   return 0;

}