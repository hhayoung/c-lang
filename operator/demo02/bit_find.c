#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 예를 들어,
	// 01001000 에서 2번째 비트값이 1인지 찾기 위해서
	// 01000000 을 & 연산하면 1이면 1이 나오고, 0이면 0
	// 각각의 자릿수에 1을 & 연산하면 비트값을 다 알아낼 수 있다.

	// 입력받은 문자의 비트(8비트)값 출력하기
	char ch;

	printf("문자 입력 : ");
	scanf("%c", &ch);

	printf("%2d", ch & (1 << 7) ? 1 : 0);
	printf("%2d", ch & (1 << 6) ? 1 : 0);
	printf("%2d", ch & (1 << 5) ? 1 : 0);
	printf("%2d", ch & (1 << 4) ? 1 : 0);
	printf("%2d", ch & (1 << 3) ? 1 : 0);
	printf("%2d", ch & (1 << 2) ? 1 : 0);
	printf("%2d", ch & (1 << 1) ? 1 : 0);
	printf("%2d", ch & (1) ? 1 : 0);

	printf("\n%d", ch);	

	return 0;
}