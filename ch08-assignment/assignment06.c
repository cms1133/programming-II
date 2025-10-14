// 학번 :202511239
// 이름 : 채명식
// 문제 : ch08 assignment 06
// 날짜 :10/2



#include<stdio.h>
void get_min_max(int*);
int main(void) {
	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };

	printf("배열: ");
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	
	get_min_max(arr);

	return 0;
}
void get_min_max(int* arr) {
	
	int max = arr[0], min = arr[0];

	
	for (int i = 0; i < 10; i++) {
		if (min >= arr[i]) {
			min = arr[i];
		}
		if (max <= arr[i]) {
			max = arr[i];
		}
	}

	printf("\n최대값: %d\n", max);
	printf("최소값: %d\n", min);
}