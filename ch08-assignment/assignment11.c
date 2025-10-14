// 학번 :202511239
// 이름 : 채명식
// 문제 : ch08 assignment 11
// 날짜 :10/2



#include<stdio.h>
void get_rect_info(int* pa, int* pb) {
	int area, girth;

	area = (*pa) * (*pb);
	girth = (*pa + *pb) * 2;

	printf("넓이: %d, 둘레: %d", area, girth);
}
int main(void) {
	int a, b;

	printf("가로? ");
	scanf_s("%d", &a);
	printf("세로? ");
	scanf_s("%d", &b);

	int* pa = &a;
	int* pb = &b;

	
	get_rect_info(pa, pb);

	return 0;
}