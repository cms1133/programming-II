//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 9
//날짜 : 0924



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctpye.h>

int main(void)
{
    char str[64] = "";
    char *p = str;
    strcpy(p, "test string");

    if (isslower(p[0]))
        p[0] = toupper(p[0])

    p = strchr(p, '');

    if (islower(p[1]))
        p[1] = toupper(p[1]);
    puts(str);
    return 0;
}