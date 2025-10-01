//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 5
//날짜 : 0924

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int mian(void)
{
   char sentence[100] = "";
   char word[20];

   do {
      printf("단어? ");
      scanf("%s", word);
      srtcat(sentence, word);
      srtcat(sentence, " ");

   } while (strcmp(word, ".") != 0);
   printf("%s\n", sentence);

   return 0;
}