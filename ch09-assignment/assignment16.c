// 학번 :202511239
// 이름 : 채명식
// 문제 : ch09 assignment 16
// 날짜 :10/5



#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#define MAX 256

int main(void) {
	int num = 0;
	char ID[5][MAX]{
		"abc123",
		"mmm123",
		"mango",
		"need",
		"admin"
	};
	char PASS[5][MAX]{
		"123abc",
		"123mmm",
		"delicious",
		"money",
		"want_to_go_home"
	};
	char id[MAX] = "";
	char pass[MAX] = "";

	for (;;) {
	start:

		printf("ID: ");
		scanf("%s", id);
		printf("PW: ");
		scanf("%s", pass);

		for (int i = 0; i < 5; i++) {
			if (strcmp(ID[i], id) == 0) { 
				if (strcmp(PASS[i], pass) == 0) { 
					printf("로그인 성공!\n");
					return 0;
				}
				else {
					printf("패스워드가 틀렸습니다.\n");
					num++;
					goto start;
				}
			}
		}
		printf("해당 id가 없습니다.\n");
		num++;

		if (num == 3) {
			printf("로그인 실패 횟수 초과\n");
			break;
		}
	}
	return 0;
}