//hint1. _CRT_SECURE_NO_WARNINGS (���־� ��Ʃ����� ����ϴ� ��쿡��)
//hint2.������ �� 3�� ���, x, y, sum(�� ���� ��� �ڷ����� ����.)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int x;
	int y;
	int sum;

	printf("x�� y�� �Է��Ͻÿ�>> ");
	scanf("%d %d\n", &x, &y);

	sum = x + y;
	printf("�� ���� ��: %d\n", sum);


	return 0;
}