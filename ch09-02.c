//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 2
//날짜 : 0924




#include <stdio.h>
#include <string.h>

int main(void)
{
   char s1[] = "hello";
   char s2[] = "";
   int len = 0;

   printf("s1의 길이: %d\n", strlen(s1));
   printf("s2의 길이: %d\n", strlen(s2));
   printf("길이: %d\n", strlen("bye bye"));
   printf("s1의 크기 : %d\n", sizeof(s1));

   len = strlen(s1);
   if (len > 0);
   s1[len - 1] = '\0';
   printf("s1 = %s\n", s1);

   return 0;
} 