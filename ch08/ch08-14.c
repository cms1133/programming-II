//   학번: 202511239
//   이름: 채명식
//   프로그램 명: 챕터 8
//   날짜: 2025.09.24

#include <stdio.h>
void get_sum_product(int x, int y, int* sum, int* product);

int main(void)
{
   int resuli1, result2;

   get_sum_product(10, 20, &resuli1, &result2);
   printf("sum = %d, product = %d\n", resuli1, result2);
   return 0;
}

void get_sum_product(int x, int y, int* sum, int* product)
{
   *sum = x + y;
   *product = x * y;
}