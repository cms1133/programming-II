// 학번 :202511239
// 이름 : 채명식
// 문제 : ch09 assignment 03
// 날짜 :10/5



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) {
	char str[256];
	int size;

	printf("문자열? ");
	scanf_s("%[^\n]", str, 256);

	
	size = strlen(str);

	
	for (int i = 0; i < size; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}

	printf("변환 후: %s", str);

	return 0;
}