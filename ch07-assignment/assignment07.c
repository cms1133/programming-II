// 학번 :202511239
// 이름 : 채명식
// 문제 : ch07 assignment 07
// 날짜 :10/1



#include<stdio.h>
void fill_array(int a) {
	int i;
	int arr[20];

	for (i = 0; i < 20; i++) {
		arr[i] = a;
		printf("%d  ", arr[i]);
	}
}
int main(void) {
	int a;

	printf("¹è¿­ÀÇ ¿ø¼Ò¿¡ ÀúÀåÇÒ °ª? ");
	scanf_s("%d", &a);
	fill_array(a);

	return 0;
}