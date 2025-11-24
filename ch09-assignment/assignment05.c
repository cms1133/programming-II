// 학번 :202511239
// 이름 : 채명식
// 문제 : ch09 assignment 05
// 날짜 :10/5




#include<stdio.h>
#include<string.h>
#define SIZE 255 
int strcmp_ic(char* a, char* b) {


	while (*a >= 'A' && *a <= 'Z') {
		
		*a = *a + 32;
	}
	while (*b >= 'A' && *b <= 'Z') {
		*b = *b + 32;
	}
	
	if (*a == *b) {
		return 1;
	}
	else
		return -1;
}
int main(void) {
	char a[SIZE] = "";
	char b[SIZE] = "";

	printf("첫 번째 문자열? ");
	fgets(a, sizeof(a), stdin);
	a[strcspn(a, "\n")] = '\0';
	printf("두 번째 문자열? ");
	fgets(b, sizeof(b), stdin);
	b[strcspn(b, "\n")] = '\0';

	if (strcmp_ic(a, b) < 0) {
		printf("%s와 %s가 다릅니다.\n", a, b);
	}
	else
		printf("%s와 %s가 같습니다.\n", a, b);

	return 0;
}