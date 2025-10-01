//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 10
//날짜 : 0924




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <srting.h>
#include <ctype.h>
int count_space(const char* s);

int main(void)
{
    char str[64] = "this program/ttets const pointer to srting\n";

    puts(str);
    printf("공백 문자의 개수: %d\n", count_spaces(str));
    return 0;
}

int count_space(const char* s)
{
    int count = 0;
    while (s[0] != '\0'){
        if (isspace(s[0]))
            count++;
        s++;
    }

}

