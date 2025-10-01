//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 6
//날짜 : 0924




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
   char filename[] = "readme.txt";
   char* p = NULL;

   p = strchr(filename, '.');
   if (p != NULL)
      printf("file extension:%s\n", p + 1);

   p = strchr(filename, '.');
   if (p != NULL)
      printf("file type: TXTT file\n");


   return 0;
}