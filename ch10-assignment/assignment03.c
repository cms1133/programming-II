// 학번 :202511239
// 이름 : 채명식
// 문제 : ch10 assignment 03
// 날짜 :10/10





#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct Login {
	char ID[20];
	char Password[20];
} Login;
int main() {
	char ID[20];
	char Password[20];

	Login arr[5] = {
	{"C#","C++"},
	{"Node.js","MySQL"},
	{"html","css"},
	{"JQuery","React.js"},
	{"Git","Github"}
	};

	for (;;) {
		printf("ID? ");
		scanf("%s", ID);

		if (*ID == '.')break;

		getchar();

		printf("Password? ");
		scanf("%s", Password);

		for (size_t i = 0; i < 5; i++) {
			if (*ID == *arr[i].ID) {
				if (*Password == *arr[i].Password) {
					printf("·Î±×ÀÎ ¼º°ø\n");
				}
			}
		}
	}
	return 0;
}