// 학번 :202511239
// 이름 : 채명식
// 문제 : ch07 assignment 14
// 날짜 :10/1



#include<stdio.h>
#include<stdlib.h> 
#include <time.h> 
void suf(int* arr) {
	srand(time(NULL)); 
	
	for (size_t i = 0; i < 10; i++) {
		
		size_t j = i + rand() / (RAND_MAX / (10 - i) + 1);
		int temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		printf("%4d", temp);
	}
}
int main(void) {
	int arr[10] = { 12,64,80,42,67,9,8,7,56,48 };

	printf("셔플 전: ");
	for (int i = 0; i < 10; i++) {
		printf("%4d", arr[i]);
	}
	printf("\n셔플 후: ");
	suf(arr);
	
	return 0;
}