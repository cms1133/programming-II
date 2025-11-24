// 학번 :202511239
// 이름 : 채명식
// 문제 : ch10 assignment 08
// 날짜 :10/11





#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct PRODUCT {
	char name[20];
	int price;
	int stock;
};
void product(struct PRODUCT a) {
	printf("[ 제품명 :%s  가격:%d  재고:%d ]", a.name, a.price, a.stock);
}
int main(void) {
	struct PRODUCT a;

	printf("제품명 : ? ");
	scanf("%s", &a.name);
	printf("가격?");
	scanf("%d", &a.price);
	printf("재고? ");
	scanf("%d", &a.stock);

	printf_product(a);

	return 0;
}