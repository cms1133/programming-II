//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 4
//날짜 : 0924

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10

int main(void)
{
   char s1[SIZE] = "apple";
   char s2[SIZE] = "apple";
   char password[SIZE];

   if (s1 == s2)
      printf("same string\n");

   printf("패스워드?");
   scanf("%s", password);
   if (strcmp(password, "abcd1234") == 0)
      printf("login succeeded\n");
   else
      printf("login failed\n");

   return 0;
}
