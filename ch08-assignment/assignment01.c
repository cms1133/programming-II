// 학번 :202511239
// 이름 : 채명식
// 문제 : ch08 assignment 01
// 날짜 :10/2


#include<stdio.h>
int main(void) {
	double arr[3];
	double* p;

	for (int i = 0; i < 3; i++) {
		p = &arr[i];
		
		printf("x[%d]ÀÇ ÁÖ¼Ò: %p\n", i, p);
	}
	return 0;
}