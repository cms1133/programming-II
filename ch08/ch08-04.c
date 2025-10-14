//   학번: 202511239
//   이름: 채명식
//   프로그램 명: 챕터 8
//   날짜: 2025.09.24

#include <stdio.h>   

int main(void)
{

   int x = 10;
   int *p = &x;
   printf(" x = %d\n", x);   
   printf(" &x = %p\n", &x);   

   printf(" p = %p\n", p);
   printf(" *p = %d\n", *p);
   printf(" &p = %p\n", &p);   

   *p = 20; 

   printf("*p = %d\n", *p);   

   return 0;

}