
//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch10 예제 15
//날짜 : 0926

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union test {
	int i;							
	char c;
	short s;
};

int ex10_15(void)
{
	union test t1 = { 0x12345678 };	

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i의 주소 = %p\n", &t1.i); 
	printf("t1.c의 주소 = %p\n", &t1.c);
	printf("t1.s의 주소 = %p\n", &t1.s);

	printf("t1.i = %x\n", t1.i);		
	printf("t1.c = %x\n", t1.c);		
	printf("t1.s = %x\n", t1.s);		

	return 0;
}