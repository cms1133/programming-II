// 학번 :202511239
// 이름 : 채명식
// 문제 : ch10 assignment 02
// 날짜 :10/10





#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct Login {
	char ID[20];
	char Password[20];
};
void make_lower(char* ID, char* Password) {
	_strlwr(ID); 
	_strlwr(Password);
}
void print_login(char* ID, int n) {
	printf("ID: %s\n", ID);
	printf("Password: ");
	for (size_t i = 0; i < n; i++) {
		printf("*");
	}
}
int main(void) {
	struct Login a;

	printf("ID? ");
	scanf("%s", a.ID);
	printf("Password? ");
	scanf("%s", a.Password);

	size_t n = strlen(a.Password);

	make_lower(a.ID, a.Password);
	print_login(a.ID, n);

	return 0;
}