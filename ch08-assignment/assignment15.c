// 학번 :202511239
// 이름 : 채명식
// 문제 : ch08 assignment 15
// 날짜 :10/2



#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
void sort_array(int* arr) {
	int temp;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] > arr[j + 1]) {
				
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(void) {
	srand(time(NULL));
	int arr[10];

	printf("정렬 전:");

	for (int i = 0; i < 10; i++) {
		
		arr[i] = rand() % 100;
		printf("%3d", arr[i]);
	}

	sort_array(arr);

	printf("\n정렬 후:");

	for (int i = 0; i < 10; i++) {
		printf("%3d", arr[i]);
	}

	return 0;
}