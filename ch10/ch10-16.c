//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch10 예제 16
//날짜 : 0926

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union color_t {
	unsigned int color;
	unsigned char rgb[4];	
							
} COLOR_T;

int ex10_16(void)
{
	COLOR_T c1;

	c1.rgb[0] = 0xFF;		
	c1.rgb[1] = 0xAB;		
	c1.rgb[2] = 0x1F;		
	c1.rgb[3] = 0x0;		

	printf("rgb color = %08X\n", c1.color);		

	return 0;
}