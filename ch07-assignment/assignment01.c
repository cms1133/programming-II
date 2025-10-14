// 학번 :202511239
// 이름 : 채명식
// 문제 : ch07 assignment 01
// 날짜 :10/1




#include<stdio.h>
int main(void) {
	int a, b;
	int arr[10];

	printf("첫 번째 항? ");
	scanf_s("%d", &a);
	printf("공차? ");
	scanf_s("%d", &b);

	for (int i = 0; i < 10; i++) {
		if (i != 0)
			
			arr[i] = arr[i - 1] + b;
		else if (i == 0)
			
			arr[i] = a;
	}

	printf("등차수열:");

	// 등차수열 출력
	for (int i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
	}
	return 0;
}