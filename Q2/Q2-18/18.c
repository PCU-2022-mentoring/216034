//hint1. _CRT_SECURE_NO_WARNINGS (비주얼 스튜디오를 사용하는 경우에만)
//hint2.변수는 총 3개 사용, x, y, sum(세 변수 모두 자료형이 같다.)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int x;
	int y;
	int sum;

	printf("x와 y를 입력하시오>> ");
	scanf("%d %d\n", &x, &y);

	sum = x + y;
	printf("두 수의 합: %d\n", sum);


	return 0;
}