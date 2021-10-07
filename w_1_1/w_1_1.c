//두 정수 입력받아 비교하기

#include <stdio.h>

int main(void) {

	int a, b;

	printf("두 정수 a, b를 입력하시오: ");

	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("1");

	else
		printf("0");

	return 0;
}