//   학번: 202511239
//   이름: 채명식
//   프로그램 명: 챕터 8
//   날짜: 2025.09.24

#include <stdio.h>

int main(void)
{
   int data[3][5] = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
      {11, 12, 13, 14, 15} 
   };
   int(*p)[5] = &data[0];
   int i, j;

   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 5; j++)
         printf("%2d ", p[i][j]);
      printf("\n");
   }

   return 0;
}