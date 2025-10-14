
//학번 : 202511239   
//이름 : 채명식
//프로그램 명 : ch10 예제 14
//날짜 : 0926

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum direction { NORTH, SOUTH, EAST, WEST };

int ex10_14(void)
{
	enum direction d1 = NORTH;		

	d1 = EAST;						
	printf("d1 = %d\n", d1);		

	switch (d1)
	{
	case NORTH:						
		printf("북쪽으로 이동합니다.\n");
		break;
	case SOUTH:
		printf("남쪽으로 이동합니다.\n");
		break;
	case EAST:
		printf("동쪽으로 이동합니다.\n");
		break;
	case WEST:
		printf("서쪽으로 이동합니다.\n");
		break;
	}
	return 0;
}