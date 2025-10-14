//   학번: 202511239
//   이름: 채명식
//   프로그램 명: 챕터 8
//   날짜: 2025.09.24

#include <stdio.h>

int main(void)
{
   int *p2 = (int*)0x12345678;

   int a = 10;
   int *p3 = &a;
   int *p4 = 0;
   int* p5 = NULL;

   printf("p2 = %p\n", p2);
   printf("p3 = %p\n", p3);   
   printf("p4 = %p\n", p4);   
   printf("p5 = %p\n", p5);   

   return 0;

}