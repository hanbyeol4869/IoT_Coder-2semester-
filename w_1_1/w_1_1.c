//�� ���� �Է¹޾� ���ϱ�

#include <stdio.h>

int main(void) {

	int a, b;

	printf("�� ���� a, b�� �Է��Ͻÿ�: ");

	scanf_s("%d %d", &a, &b);

	if (a > b)
		printf("1");

	else
		printf("0");

	return 0;
}