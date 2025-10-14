// 학번 :202511239
// 이름 : 채명식
// 문제 : ch09 assignment 02
// 날짜 :10/5



#include<stdio.h>
#include<ctype.h>
void remove_space(char* str) {
	char* pstr = str;

	while (*str != 0) {
		
		if (isspace(*str) == 0) {
			if (pstr != str)
				* pstr = *str;
			pstr++;
		}
		str++;
	}
	*pstr = 0;
}
int main(void) {
	char str[256];

	printf("문자열? ");
	scanf_s("%[^\n]s", str, 256);
	remove_space(str);
	printf("공백 문자 제거후: %s", str);

	return 0;
}