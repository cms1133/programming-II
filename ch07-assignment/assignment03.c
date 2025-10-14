// 학번 :202511239
// 이름 : 채명식
// 문제 : ch07 assignment 03
// 날짜 :10/1



#include<stdio.h>
int main(void) {
	int arr[10]{ 23,45,62,12,99,83,23,50,72,37 };

	int max = arr[0];
	int min = arr[0];

	printf("배열: ");
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("\n최대값: %d\n", max);
	printf("최소값: %d\n", min);

	return 0;
}