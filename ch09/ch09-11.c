//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 11
//날짜 : 0924

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128
int swap_string(char* lhs, char* rhs, int size);

int main(void)
{
    char str1[SIZE] = "";
    char str2[SIZE] = "";

    printf("문자열 2개?");
    scanf("%s %s", str1 ,str2);

    printf("str1=%s, str2=%s\n", str1, str2);
    swap_string(str1, str2, SIZE);
    printf("str1=%s, str2=%s\n", str1, str2);
    return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
    int lhs_len = strlen(lhs);
    int rhs_len = strlen(rhs);
    char temp[SIZE] = "";

    if (lhs_len + 1 > size || rhs_len + 1 > size)
        return 0;

        strcpy(temp, lhs);
        strcpy(lhs, rhs);
        strcpy(rhs, temp);
        return 1;
}