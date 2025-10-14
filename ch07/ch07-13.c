
//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch07 예제 13
//날짜 : 0924



#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
   arr_reset();

   return 0;
}

int arr_reset()
{
   int data[ROW][COL] = {
      {10,20},{30,40},{50,60}
   };
   int i, j;

   for (i = 0; i < ROW; i++)
   {
      for (j = 0; j < COL; j++)
         printf("%3d ", data[i][j]);
      printf("\n");
   }
   return 0;
}
