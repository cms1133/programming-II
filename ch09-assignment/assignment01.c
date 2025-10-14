// 학번 :202511239
// 이름 : 채명식
// 문제 : ch09 assignment 01
// 날짜 :10/5



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) {
	char str[256];
	int count = 0;

	printf("문자열? ");
	scanf_s("%[^\n]", str, 256);


	int n = strlen(str);

	for (int i = 0; i < n; i++) {
		
		if (isspace(str[i]))
			count++;
	}

	printf("공백 문자의 개수: %d", count);

	return 0;
}