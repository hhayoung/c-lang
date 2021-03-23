#include <stdio.h>

int main_comma_sizeof()
{
	int i, j;
	// 콤마 연산자
	// : 왼쪽 수식부터 계산하여 마지막으로 계산한 오른쪽 수식값이 최종 결과값
	j = (i = 2 + 4, i - 3);

	printf("%d\b", j); // j=3


	// sizeof 연산자(단항 연산자)
	/*
		sizeof(변수) : 변수의 기억공간 크기(바이트 수)
		sizeof(상수) : 상수의 기억공간 크기(바이트 수)
		sizeof(수식) : 수식의 결과값 기억공간(메모리)의 크기(바이트 수)
		sizeof(자료형) : 자료형의 기억공간 크기(자료형은 반드시 괄호가 있어야 함.)
	*/

	int aa = 10;
	printf("%d\n", sizeof aa); // 4
	printf("%d\n", sizeof(short)); // 2

	int bb = 20;
	printf("%d", sizeof bb + 5); // sizeof bb = 4 + 5 = 9
	
	return 0;
}