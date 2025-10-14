// 학번 :202511239
// 이름 : 채명식
// 문제 : ch09 assignment 12
// 날짜 :10/5


#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#define MAX 256
void reverse(char* word) {
	size_t size = strlen(word);
	char temp;

	for (size_t i = 0; i < size / 2; i++) {
		temp = word[i];
		word[i] = word[(size - 1) - i];
		word[(size - 1) - i] = temp;
	}
}
int main(void) {
	char word[MAX] = "";
	char wordA[MAX] = "";
	char wordB[MAX] = "";
	size_t key;
	
	printf("문자열? ");
	scanf("%[^\n]s", word);

	for (;;) {
		printf("이동할 글자수? ");
		scanf("%d", &key);

		if (key == 0)break;

		for (size_t i = 0; i < strlen(word); i++) {
			if (i < strlen(word) - key) {
				wordA[i] = word[i];
			}
			else wordB[strlen(word) - i - 1 ] = word[i];
			if (i == strlen(word) - key) {
				wordA[i] = NULL;
			}
		}

		reverse(wordB);

		word[0] = '\0';

		strcat(word, wordB);
		strcat(word, wordA);

		printf("%s\n", word);
	}
	return 0;
}