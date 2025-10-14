// 학번 :202511239
// 이름 : 채명식
// 문제 : ch10 assignment 08
// 날짜 :10/11





#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct PRODUCT {
	char name[20];
	int price;
	int stock;
};
void printf_product(struct PRODUCT a) {
	printf("[ %s  %d¿ø  Àç°í:%d ]", a.name, a.price, a.stock);
}
int main(void) {
	struct PRODUCT a;

	printf("Á¦Ç°¸í? ");
	scanf("%s", a.name);
	printf("°¡°Ý? ");
	scanf("%d", &a.price);
	printf("Àç°í? ");
	scanf("%d", &a.stock);

	printf_product(a);

	return 0;
}