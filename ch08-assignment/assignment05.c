// 학번 :202511239
// 이름 : 채명식
// 문제 : ch08 assignment 05
// 날짜 :10/2


#include<stdio.h>
void arith_seq(int, int);
int main(void) {
	int arr[10];
	int a, b, * p;

	printf("첫번째 항? ");
	scanf_s("%d", &a);
	printf("공차? ");
	scanf_s("%d", &b);

	
	arr[0] = a;
	p = &arr[0];

	
	arith_seq(*p, b);
	
	return 0;
}
void arith_seq(int p, int num) {
	printf("등차수열: ");

	
	for (int i = 0; i < 10; i++) {
		printf("%d ", p);
		p = p + num;
	}
}