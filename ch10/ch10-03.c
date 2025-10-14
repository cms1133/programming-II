//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch10 예제 3
//날짜 : 0926

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct contact		
{
	char name[20];	
	char phone[20];	
	int ringtone;	
};

int ex10_03(void)
{
	struct contact ct = { "김석진", "01011112222", 0 };
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1;
	printf("ct1으로 초기화 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;	/
	printf("ct를 대입한 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}