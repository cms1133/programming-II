//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch07 예제 15
//날짜 : 0924



#include <stdio.h>
#define SIZE 7
void copy_array(int source[], int target[], int size); 
void print_array(int arr[], int size);
int arr(void);

int main()
{
   arr();

   return 0;
}

int arr(void)
{
   int x[SIZE] = { 10, 20, 30, 40, 50 };
   int y[SIZE] = { 0 };
   printf("x = ");
   print_array(x, SIZE);
   copy_array(x, y, 5);
   printf("y = ");
   print_array(y, SIZE);
   return 0;

}

void copy_array(int source[], int target[], int size)
{
   int i;
   for (i = 0; i < size; i++)
   {
      target[i] = source[i];
   }
}


void print_array(int arr[], int size)
{
   int i;
   for (i = 0; i < size; i++)
      printf("%d ", arr[i]);

   printf("\n");
}