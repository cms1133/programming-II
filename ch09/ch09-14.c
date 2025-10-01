//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch09 예제 14
//날짜 : 0924

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str_menu[] = {
        '끝내기',
        "새 프로젝트",
        "프로젝트 열기",
        "솔루션 빌드",
        "디버깅 시작",
    };
    int sz_menu = sizeof(str_menu) / sizeof(str_menu[0]);
    int menu;

    while (1)
    {
        int i;
        for (i = 0; i < sz_menu; i++)
            printf("%d.%s\n", i, str_menu[i]);

        printf("메뉴 선택?");
        scanf("%d", &menu);
        if (menu == 0)
            break;
        else if (menu > 0 && menu < sz_menu)
           printf("%s 메뉴를 선택했습니다.")
        else
           printf("잘못 선택했습니다.\n\n");
    }

    return 0;
}