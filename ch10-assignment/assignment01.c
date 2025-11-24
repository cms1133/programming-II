d// 학번 :202511239
// 이름 : 채명식
// 문제 : ch10 assignment 01
// 날짜 :10/10


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct Login {
	char ID[20];
	char Password[20];
};
int main() {
	struct Login a;

	printf("ID? ");
	scanf("%s", a.ID);
	printf("Password? ");
	scanf("%s", a.Password);

	size_t n = strlen(a.Password);

	printf("ID: %s\n", a.ID);
	printf("Password: ");

	for (size_t i = 0; i < n; i++) {
		printf("*");
	}
	return 0;
}