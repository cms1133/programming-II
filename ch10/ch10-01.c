//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch10 예제 1
//날짜 : 0926


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct contact		
{
	char name[20];	
	char phone[20];	
	int ringtone;	
};

int ex10_01(void)
{
	printf("contact 구조체의 크기 = %d\n", sizeof(struct contact));
	
	return 0;
}

void test()
{
	struct contact c1;		
	{

	};
}