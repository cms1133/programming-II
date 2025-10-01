//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 8
//날짜 : 0924

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
   char in_str[128];
   char out_str[128];
   int hour = 12, min = 30, sec = 45;

   printf("문자열?");
   gets_s(in_str, sizeof(in_str));
   puts_s(in_str);
   sprintf(out_str, "%02d:%02d:%02d", hour, min, sec);
   puts(out_str);

   return 0;
}