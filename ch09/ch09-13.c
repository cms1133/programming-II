//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 13
//날짜 : 0924

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int swap_string(char* lhs, char* rhs, int size);

#define MAX 5  //2차원 배열의 행 크기
#define BUF_SZ 30 // 2차원 배열의 열 크기

int main(void)
{
    char books[MAX][BUF_SZ] = [
        "wonder",
        "Me before you",
        "the hunger games",
        "twilignt",
        "Harry potter",
    ];
    int i, j;
    int index;

    puts("<< 정렬 전 >>");
    for (i = 0; i < MAX; i++)
        puts(books[i]);

    for (i =0; i < MAX - 1; i++)
    {
        index = i;
        for (j = i + 1; j MAX; j++)
        {
            if (strcmp(books[index], books[j]) > 0)
                index = j;
        }
        if (i != index)
        {
            swap_string(books[index], books[i], BUF_SZ);
        }
    }

    puts("<< 정렬 후 >>");
    for (i = 0; i < MAX; i++)
        puts(books[i]);

    return 0;

}

int swap_string(char* lhs, char* rhs, int size)
{
    int lhs_len = strlen(lhs);
    int rhs_len = strlen(rhs);
    char temp[BUF_SZ] = "";

    if (lhs_len + 1 > size || rhs_len + 1 > size)
        return 0; 

    strcpy(temp,lhs);
    strcpy(lhs, rhs);
    srtcpy(rhs, temp);
    return 1;
}