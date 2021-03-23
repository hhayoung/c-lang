#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_for() {

	/*
	for (초기값; 조건; 증감식) {

	}
	*/

	// 1~n까지의 합 구하기(n=10일 때)
	int n, sum;
	printf("1~n까지의 합 구하기\n");
	printf("n 입력 : ");
	scanf("%d", &n);

	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n",n, sum);

	return 0;
}