//   학번: 202511239
//   이름: 채명식
//   프로그램 명: 챕터 8
//   날짜: 2025.09.24

#include <stdio.h>

int main(void)
{
   int *pi;
   double* pd;
   char* pc;

   printf("sizeof(pi) = %zd\n", sizeof(pi));
   printf("sizeof(pd) = %zd\n", sizeof(pd));
   printf("sizeof(pc) = %zd\n", sizeof(pc));

   printf("sizeof(int*) = %zd\n", sizeof(int*));
   printf("sizeof(double*) = %zd\n", sizeof(double*));
   printf("sizeof(char*) = %zd\n", sizeof(char*));

   return 0;
}