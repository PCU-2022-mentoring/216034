#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int radius;
	double area;

	printf("�������� �Է��Ͻÿ�: ");
	scanf("%d",&radius);

	area = 3.14 * radius * radius;

	printf("���� ����: %lf\n",area);


	return 0;

}