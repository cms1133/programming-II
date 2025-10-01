//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 12
//날짜 : 0924


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctpye.h>

int main(void)
{
    char books[5][30] = {
        "wonder",
        "me before you",
        "the hunger games",
        "twilight",
        "harry potter",
    };
    int i = 0;
    
    for (i = 0; i < 5; i++)
        printf("책 제목: %s\n", books[i]);

    for (i = 0; i < 5; i++)
    {
        if (islower(books[i][0]))
            books[i][0] = toupper(books[i][0]);
    }
    
    puts("<< 변경 후 >>");
    for (i = 0; i < 5; i++)
        printf("책 제목: %s\n", books[i])

    return 0;
}